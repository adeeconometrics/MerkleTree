#ifndef __SHA256_H__
#define __SHA256_H__

/**
 * @brief implementation of sha256. Design specification obtained at:
 *        https://en.bitcoinwiki.org/wiki/SHA-2
 */

#include <array>
#include <cstdint>
#include <string>
#include <vector>

struct SHA256 final {
public:
  SHA256();
  SHA256(const SHA256 &) = delete;
  SHA256(SHA256 &&) = delete;
  ~SHA256() = default;

  auto operator=(const SHA256 &) -> SHA256 & = delete;
  auto operator=(SHA256 &&) -> SHA256 & = delete;

public:
  auto operator()(const std::string& data) -> std::vector<uint8_t>;

private:
  auto update(const uint8_t *data, size_t len) -> void;
  auto update(const std::string &data) -> void;
  auto digest() -> std::vector<uint8_t>;
  auto reset() -> void;

private:
  auto rotr(uint32_t x, uint32_t n) const noexcept -> uint32_t;
  auto choose(uint32_t e, uint32_t f, uint32_t g) const noexcept -> uint32_t;
  auto majority(uint32_t a, uint32_t b, uint32_t c) const noexcept -> uint32_t;
  auto sig_0(uint32_t x) const noexcept -> uint32_t;
  auto sig_1(uint32_t x) const noexcept -> uint32_t;

  auto transform() -> void;
  auto pad() -> void;
  auto revert(std::vector<uint8_t> &hash) -> void;

private:
  std::array<uint8_t, 64> m_data{};
  std::array<uint32_t, 8> m_states{};

  uint32_t m_blocklen{};
  uint64_t m_bitlen{};

  static const std::array<uint32_t, 64> m_k;
};

auto to_string(const std::vector<uint8_t> &digest) noexcept
    -> std::string;

auto to_hex(const std::string& str) noexcept -> std::vector<uint8_t>;

#endif // __SHA256_H__