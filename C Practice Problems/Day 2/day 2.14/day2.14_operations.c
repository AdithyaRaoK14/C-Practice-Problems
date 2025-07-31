#include <stdio.h>
#include "day2.14.h"

void printSketch(int n) {
    for (int i = n; i > 0; i--) {
        for (int j = 0; j < i; j++) printf("* ");
        printf("\n ");
    }
}