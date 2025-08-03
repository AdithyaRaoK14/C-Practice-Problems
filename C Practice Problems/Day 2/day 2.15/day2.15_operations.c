#include <stdio.h>
#include "day2.15.h"

void printPattern(int n) {
    int total = n * (n + 1) / 2;  // total number of stars
    int row = 1, count = 0;
    for (int i = 1; i <= total; i++) {
        printf("* ");
        count++;
        if (count == row) {
            printf("\n");
            row++;
            count = 0;
        }
    }
}
