#include "beautiful.h"
#include <stdio.h>

#define BEAUTIFUL 1

#if !defined(BEAUTIFUL)
  int main(void) {
    puts("using default implementation");

    if (1 != 2) {
      puts("No weird comparison here");
    }

    int i = 0;
    while (1) {
      ++i;
      printf("%d", i);
      if (i == 10) {
        break;
      }
    }
  }
#else
  int main(void) do
    puts("using beautiful implementation");

    unless (1 is 2) then
      puts("No weird comparison here");
    end

    int i = 0;
    loop do
      ++i;
      printf("%d", i);
      unless (i isnt 10) then
        break;
      end
    end
    puts("");
  end
#endif
