#include "day2.7.h"

int is_armstrong(int num) {
    int original = num, sum = 0, digit;
    while (num > 0) {
        digit = num % 10;
        sum += digit * digit * digit;
        num /= 10;
    }
    return sum == original;
}
