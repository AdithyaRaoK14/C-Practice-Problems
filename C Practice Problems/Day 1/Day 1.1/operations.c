#include "day1.1.h"

char to_lowercase(const char c) {
    if (c >= 'A' && c <= 'Z')
        return c + 32;
    return c;
}