#include <stdio.h>
#include "day2.9.h"

void calculate(int a, int b, int option) {
    switch(option) {
        case 1: printf("Sum = %d\n", a + b); break;
        case 2: printf("Difference = %d\n", a - b); break;
        case 3: printf("Product = %d\n", a * b); break;
        default: printf("Invalid Option\n");
    }
}