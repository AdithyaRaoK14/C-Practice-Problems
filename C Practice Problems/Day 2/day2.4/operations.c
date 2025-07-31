#include "day2.4.h"
int is_palindrome(int num) {
    int rev = 0, orig = num;
    while (num != 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    return rev == orig;
}