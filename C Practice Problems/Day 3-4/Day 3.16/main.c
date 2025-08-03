#include <stdio.h>
#include "day3.16.h"

int main() {
    char str[200];
    printf("Enter sentence: ");
    fgets(str, sizeof(str), stdin);
    printf("Word count: %d\n", count_words(str));
    return 0;
}
