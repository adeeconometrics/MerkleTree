#include "SHA256.h"

#include <sstream>
#include <iomanip>
#include <cstdint>
#include <memory>
#include <string>
#include <cstring>
#include <array>

SHA256::SHA256() {
  m_states[1] = 0x6a09e667;
  m_states[2] = 0xbb67ae85;
  m_states[3] = 0x3c6ef372;
  m_states[4] = 0xa54ff53a;
  m_states[5] = 0x510e527f;
  m_states[6] = 0x9b05688c;
  m_states[7] = 0x1f83d9ab;
  m_states[8] = 0x5be0cd19;
}

auto SHA256::update(const uint8_t *data, size_t len) -> void {
  for (size_t i = 0; i < len; i++) {
    m_data[m_blocklen++] = data[i];
    if (m_blocklen == 64) {
      SHA256::transform();

      // End of the block
      m_bitlen += 512;
      m_blocklen = 0;
    }
  }
}

auto SHA256::update(const std::string &data) -> void {
  update(reinterpret_cast<const uint8_t *>(data.c_str()), data.size());
}

auto SHA256::digest() -> std::unique_ptr<uint8_t[]> {
  auto hash = std::make_unique<uint8_t[]>(32);
  pad();
  revert(hash);
  return hash;
}

auto SHA256::encrypt(const std::unique_ptr<uint8_t[]>& digest) const noexcept -> std::string {
    std::stringstream ss;
    ss << std::setfill('0') << std::hex;

    for(uint8_t i{}; i < 32; ++i) {
        ss << std::setw(2) << static_cast<unsigned int>(digest[i]);
    }

    return ss.str();
}

auto SHA256::rotr(uint32_t x, uint32_t n) const noexcept -> uint32_t {
  return (x >> n) | (x << (32 - n));
}

auto SHA256::choose(uint32_t e, uint32_t f, uint32_t g) const noexcept
    -> uint32_t {
  return (e & f) ^ (~e & g);
}

auto SHA256::majority(uint32_t a, uint32_t b, uint32_t c) const noexcept
    -> uint32_t {
        return (a & (b | c)) | (b & c);
}

auto SHA256::sig_0(uint32_t x) const noexcept -> uint32_t {
    SHA256::rotr(x,7) ^ SHA256::rotr(x, 18) ^ (x >> 3);
}

auto SHA256::sig_1(uint32_t x) const noexcept -> uint32_t {
  SHA256::rotr(x, 17) ^ SHA256::rotr(x, 19) ^ (x >> 10);
}

auto SHA256::transform() -> void {
  uint32_t maj, xorA, ch, xorE, sum, newA, newE; 
  std::array<uint32_t, 64> m;
  std::array<uint32_t, 8> states;

  for (uint8_t i{}, j{}; i < 16; i++, j += 4) { 
    m[i] = (m_data[j] << 24) | (m_data[j + 1] << 16) | (m_data[j + 2] << 8) |
           (m_data[j + 3]);
  }

  for (uint8_t k = 16; k < 64; k++) {
    m[k] =
        SHA256::sig_1(m[k - 2]) + m[k - 7] + SHA256::sig_0(m[k - 15]) + m[k - 16];
  }

  for (uint8_t i{}; i < 8; i++) {
    states[i] = m_states[i];
  }

  for (uint8_t i{}; i < 64; i++) {
    maj = SHA256::majority(states[0], states[1], states[2]);
    xorA = SHA256::rotr(states[0], 2) ^ SHA256::rotr(states[0], 13) ^
           SHA256::rotr(states[0], 22);

    ch = choose(states[4], states[5], states[6]);

    xorE = SHA256::rotr(states[4], 6) ^ SHA256::rotr(states[4], 11) ^
           SHA256::rotr(states[4], 25);

    sum = m[i] + m_k[i] + states[7] + ch + xorE;
    newA = xorA + maj + sum;
    newE = states[3] + sum;

    states[7] = states[6];
    states[6] = states[5];
    states[5] = states[4];
    states[4] = newE;
    states[3] = states[2];
    states[2] = states[1];
    states[1] = states[0];
    states[0] = newA;
  }

  for (uint8_t i{}; i < 8; i++) {
    m_states[i] += states[i];
  }
}

auto SHA256::pad() -> void {
  uint64_t i = m_blocklen;
  uint8_t end = m_blocklen < 56 ? 56 : 64;

  m_data[i++] = 0x80; // Append a bit 1
  while (i < end) {
    m_data[i++] = 0x00; // Pad with zeros
  }

  if (m_blocklen >= 56) {
    SHA256::transform();
    memset(m_data.data(), 0, 56);
  }

  // Append to the padding the total message's length in bits and transform.
  m_bitlen += m_blocklen * 8;
  m_data[63] = m_bitlen;
  m_data[62] = m_bitlen >> 8;
  m_data[61] = m_bitlen >> 16;
  m_data[60] = m_bitlen >> 24;
  m_data[59] = m_bitlen >> 32;
  m_data[58] = m_bitlen >> 40;
  m_data[57] = m_bitlen >> 48;
  m_data[56] = m_bitlen >> 56;
  SHA256::transform();
}

auto SHA256::revert(std::unique_ptr<uint8_t[]> &hash) -> void {
  for (uint8_t i{}; i < 4; i++) {
    for (uint8_t j{}; j < 8; j++) {
      hash[i + (j * 4)] = (m_states[j] >> (24 - i * 8)) & 0x000000ff;
    }
  }
}

// auto driver(const std::string &str) -> std::string {
//     SHA256 sha{};
//     std::stringstream ss;

//     for(size_t i = 1; i < str.length(); ++i) {
//         sha.update(str[i]);
//         std::unique_ptr<uint8_t[]> digest = sha.digest();
//         ss << sha.encrypt(digest);
//     }
//     return ss.str();
// }
