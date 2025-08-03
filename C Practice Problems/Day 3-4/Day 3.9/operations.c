#include "day3.9.h"

int str_length(char *str) {
    int len = 0;
    while (str[len] != '\0') len++;
    return len;
}
