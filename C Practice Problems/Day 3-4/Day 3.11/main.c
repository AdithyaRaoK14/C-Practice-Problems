#include <stdio.h>
#include "day3.11.h"

int main() {
    char str[100];
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);
    if (is_palindrome(str)) printf("Palindrome\n");
    else printf("Not Palindrome\n");
    return 0;
}
