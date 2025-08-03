#include <stdio.h>
#include "day3.9.h"

int main() {
    char str[100];
    printf("Enter string: ");
    scanf("%s", str);
    printf("Length: %d\n", str_length(str));
    return 0;
}
