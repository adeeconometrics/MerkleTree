#ifndef __UTILITIES_H__
#define __UTILITIES_H__

#include <algorithm>
#include <cstdint>
#include <iomanip>
#include <iterator>
#include <string>
#include <vector>

template <typename T>
auto operator<<(std::ostream &os, const std::vector<T> &v) -> std::ostream & {
  os << "b'";
  for (auto i : v)
    os << i;
  return os << "'";
}

template <typename T> auto reverse(const std::vector<T> &v) -> std::vector<T> {
  return {v.crbegin(), v.crend()};
}

auto combine(const std::vector<uint8_t> &lhs, const std::vector<uint8_t> &rhs)
    -> const std::vector<uint8_t> {

  std::vector<uint8_t> concat(lhs);

  std::vector<uint8_t> reversed_lhs = reverse(lhs);
  std::vector<uint8_t> reversed_rhs = reverse(rhs);

  std::copy(rhs.cbegin(), rhs.cend(), std::back_inserter(concat));
  return concat;
}

auto reverse(const std::string &str) -> std::string {
  return {str.crbegin(), str.crend()};
}

auto combine(std::string lhs, std::string rhs) -> std::string {
  std::reverse(lhs.begin(), lhs.end());
  for (size_t i{1}; i < lhs.size(); i += 2)
    std::swap(lhs[i - 1], lhs[i]);

  std::reverse(rhs.begin(), rhs.end());
  for (size_t i{1}; i < rhs.size(); i += 2)
    std::swap(rhs[i - 1], rhs[i]);

  // convert lhs and rhs into bytes and add them
  // -- convert string to byte and perform addition (append bytes)
  return lhs + rhs;
}

#endif //__UTILITIES_H__