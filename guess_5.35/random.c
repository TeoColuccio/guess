#include <stdlib.h>
#include <time.h>
#include "random.h"

void random_init() {
  srand(time(NULL));
}

int random_extract(int min, int max) {
  return rand()%(max-min)+(min);
}
