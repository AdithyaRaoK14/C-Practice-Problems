#include <stdio.h>
#include "day3.13.h"

int main() {
    char str1[100], str2[100];
    printf("Enter string: ");
    fgets(str1, sizeof(str1), stdin);
    copy_string(str1, str2);
    printf("Copied: %s", str2);
    return 0;
}
