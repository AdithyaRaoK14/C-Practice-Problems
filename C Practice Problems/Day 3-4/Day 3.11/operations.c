#include "day3.11.h"

int is_palindrome(const char *str) {
    int len = 0;
    while (str[len] != '\0' && str[len] != '\n') len++;
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) return 0;
    }
    return 1;
}
