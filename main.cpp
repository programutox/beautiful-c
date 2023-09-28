#include "beautiful.h"
#include <iostream>

#define BEAUTIFUL 1

#if !defined(BEAUTIFUL)
  auto main() -> int {
    std::cout << "using default implementation";

    if (1 != 2) {
      std::cout << "No weird comparison here";
    }

    auto i = 0;
    while (1) {
      ++i;
      printf("%d", i);
      if (i == 10) {
        break;
      }
    }
  }
#else
#endif
