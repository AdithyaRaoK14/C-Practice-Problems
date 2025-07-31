#include <stdio.h>
#include "day2.16.h"

void printTwoDigitSumNine() {
    for (int i = 10; i < 100; i++) {
        int d1 = i / 10, d2 = i % 10;
        if (d1 + d2 == 9) printf("%d ", i);
    }
}