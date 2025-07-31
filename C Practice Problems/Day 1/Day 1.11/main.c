#include "day1.11.h"
#include <assert.h>

int main() {
    int sum = random_sum();
    assert(sum >= 0 && sum < 200); // Since both rand() % 100
    return 0;
}