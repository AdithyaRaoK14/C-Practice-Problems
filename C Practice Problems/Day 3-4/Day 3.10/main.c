#include <stdio.h>
#include "day3.10.h"

int main() {
    char str[100];
    int v, c, d, s;
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);
    count_characters(str, &v, &c, &d, &s);
    printf("Vowels: %d\nConsonants: %d\nDigits: %d\nSpaces: %d\n", v, c, d, s);
    return 0;
}
