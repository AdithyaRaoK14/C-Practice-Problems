#include <assert.h>
#include "day1.6.h"

int main() {
    assert((int)celsius_to_fahrenheit(0) == 32);
    assert((int)celsius_to_fahrenheit(100) == 212);
    assert((int)celsius_to_fahrenheit(-40) == -40);
    return 0;
}