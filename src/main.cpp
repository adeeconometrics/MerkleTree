#include "SHA256.h"

#include <iostream>
#include <memory>
#include <sstream>
#include <string>

auto main() -> int {
  SHA256 sha{};
  std::string str{"the quick brown fox jump to the fence"};
  
  sha.update(str);
  std::unique_ptr<uint8_t[]> digest = sha.digest();
  std::cout << sha.encrypt(digest);

  return 0;
}
