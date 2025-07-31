#include "day2.5.h"
int is_prime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return 0;
    return 1;
}
void generate_primes(int* primes, int n) {
    int count = 0, i = 2;
    while (count < n) {
        if (is_prime(i)) {
            primes[count++] = i;
        }
        i++;
    }
}