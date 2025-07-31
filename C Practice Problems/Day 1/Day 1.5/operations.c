#include "day1.5.h"

int chars_between(const char c1, const char c2) {
    int diff = c1 - c2;
    if (diff < 0) diff = -diff;
    return diff > 1 ? diff - 1 : 0;
}