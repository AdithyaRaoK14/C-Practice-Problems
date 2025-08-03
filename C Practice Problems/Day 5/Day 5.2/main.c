#include <assert.h>
#include "day5.2.h"

int main() {
    Complex a = {3, 4};
    Complex b = {1, 2};

    Complex sum = add(a, b);
    Complex diff = subtract(a, b);
    Complex prod = multiply(a, b);

    assert(sum.real == 4 && sum.imag == 6);
    assert(diff.real == 2 && diff.imag == 2);
    assert(prod.real == -5 && prod.imag == 10);
    return 0;
}
