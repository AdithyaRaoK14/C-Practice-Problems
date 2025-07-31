#include "day2.3.h"
int count_digit_occurrence(int number, int digit) {
    int count = 0;
    while (number != 0) {
        if (number % 10 == digit) count++;
        number /= 10;
    }
    return count;
}