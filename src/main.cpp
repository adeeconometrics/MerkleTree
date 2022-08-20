#include "SHA256.h"

#include <iostream>
#include <sstream>


auto main(int argc, char ** argv) -> int {
  SHA256 sha{};
  std::stringstream ss;

  for (int i = 1; i < argc; ++i) {
    sha.update(argv[i]);
    std::unique_ptr<uint8_t[]> digest = sha.digest();
    ss << sha.encrypt(digest);
  }
  std::cout << ss.str();

  return 0;
}
