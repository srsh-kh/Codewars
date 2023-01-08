#include <stdlib.h>

int tickets(size_t length, const int people[length]) {
  int a25 = 0; int a50 = 0; int a100 = 0; int i;
  for (i=0; i < length; i++) {
    if (people[i] == 25) {
      a25 += 1;
    }
    else if (people[i] == 50) {
      a25 -= 1;
      a50 += 1;
    }
    else if (people[i] == 100) {
      if (a50 > 0){
        a50 -= 1;
        a25 -= 1;
      } else if (a25 > 2) {
        a25 = a25 - 3;
    } else {
      return 0;
      }
    }
    if (a25 < 0) {
      return 0;
    }
  }
  return 1;
  }