#include "day3.13.h"

void copy_string(const char *source, char *dest) {
    int i = 0;
    while ((dest[i] = source[i]) != '\0') i++;
}
