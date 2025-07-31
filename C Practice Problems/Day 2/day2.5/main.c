#include <assert.h>
#include "day2.5.h"
int main() {
    int primes[5];
    generate_primes(primes, 5);
    assert(primes[0] == 2);
    assert(primes[1] == 3);
    assert(primes[2] == 5);
    assert(primes[3] == 7);
    assert(primes[4] == 11);
    return 0;
}