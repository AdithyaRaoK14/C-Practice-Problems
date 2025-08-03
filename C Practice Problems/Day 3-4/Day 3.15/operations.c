#include "day3.15.h"

void concat_strings(char *a, const char *b) {
    int i = 0, j = 0;
    while (a[i] != '\0' && a[i] != '\n') i++;
    while (b[j] != '\0' && b[j] != '\n') a[i++] = b[j++];
    a[i] = '\0';
}
