#include "beautiful.h"
#include <iostream>

#define BEAUTIFUL 1

#if !defined(BEAUTIFUL)
  auto main() -> int {
    std::cout << "using default implementation\n";

    if (1 != 2) {
      std::cout << "No weird comparison here\n";
    }

    auto i = 0;
    while (1) {
      ++i;
      std::cout << i;
      if (i == 10) {
        break;
      }
    }
    std::cout << '\n';
  }
#else
  proc main() -> int {
    std::cout << "using default implementation\n";

    unless (1 == 2) {
      std::cout << "No weird comparison here\n";
    }

    var i = 0;
    loop {
      ++i;
      std::cout << i;
      unless (i < 10) {
        break;
      }
    }
    std::cout << '\n';
  }
#endif
