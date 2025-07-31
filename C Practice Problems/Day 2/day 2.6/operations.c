#include "day2.6.h"

int sum_series(int n) {
    int term = 0, sum = 0;
    for(int i = 1; i <= n; i++) {
        term = term * 10 + 1;
        sum += term;
    }
    return sum;
}
