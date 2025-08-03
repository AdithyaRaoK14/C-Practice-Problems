#include <stdio.h>
#include "day3.15.h"

int main() {
    char a[200], b[100];
    printf("Enter first string: ");
    fgets(a, sizeof(a), stdin);
    printf("Enter second string: ");
    fgets(b, sizeof(b), stdin);
    concat_strings(a, b);
    printf("Concatenated: %s\n", a);
    return 0;
}
