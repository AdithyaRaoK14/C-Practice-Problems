#include <stdio.h>
#include "day3.14.h"

int main() {
    char a[100], b[100];
    printf("Enter first string: ");
    fgets(a, sizeof(a), stdin);
    printf("Enter second string: ");
    fgets(b, sizeof(b), stdin);
    if (compare_strings(a, b)) printf("Equal\n");
    else printf("Not equal\n");
    return 0;
}
