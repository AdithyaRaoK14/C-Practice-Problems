#include <stdlib.h>
#include <time.h>
#include "day1.11.h"

int random_sum() {
    srand(time(0));
    int a = rand() % 100;
    int b = rand() % 100;
    return a + b;
}