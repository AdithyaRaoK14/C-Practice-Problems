#include "day2.8.h"

int sum_of_divisors(int num) {
    int sum = 0;
    for (int i = 1; i <= num/2; i++) {
        if (num % i == 0)
            sum += i;
    }
    return sum;
}

int are_amicable(int a, int b) {
    return (sum_of_divisors(a) == b) && (sum_of_divisors(b) == a);
}
