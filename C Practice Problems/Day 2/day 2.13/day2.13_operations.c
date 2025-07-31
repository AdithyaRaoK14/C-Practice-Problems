#include <stdio.h>
#include "day2.13.h"

void generateSequence(int n) {
    int a = 0, b = 0, c = 1, d;
    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        d = a + b + c;
        a = b;
        b = c;
        c = d;
    }
}