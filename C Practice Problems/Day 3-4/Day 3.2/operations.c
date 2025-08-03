#include <stdio.h>
#include "day3.2.h"

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
