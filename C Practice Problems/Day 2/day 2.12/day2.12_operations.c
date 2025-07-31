#include <math.h>
#include "day2.12.h"

int binaryToDecimal(long long n) {
    int decimal = 0, i = 0;
    while(n != 0) {
        decimal += (n % 10) * pow(2, i++);
        n /= 10;
    }
    return decimal;
}

long long decimalToBinary(int n) {
    long long binary = 0;
    int rem, i = 1;
    while (n != 0) {
        rem = n % 2;
        n /= 2;
        binary += rem * i;
        i *= 10;
    }
    return binary;
}