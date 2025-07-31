#include <stdio.h>
#include "day2.15.h"

void printPattern(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) printf("* ");
        printf("\n");
    }
}