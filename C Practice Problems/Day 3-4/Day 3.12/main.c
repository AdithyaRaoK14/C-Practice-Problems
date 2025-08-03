#include <stdio.h>
#include "day3.12.h"

int main() {
    char str[100];
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);
    reverse_string(str);
    printf("Reversed: %s\n", str);
    return 0;
}
