#include "day3.12.h"

void reverse_string(char *str) {
    int len = 0;
    while (str[len] != '\0' && str[len] != '\n') len++;
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
}
