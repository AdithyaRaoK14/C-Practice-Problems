#include "day3.16.h"
#include <ctype.h>

int count_words(const char *str) {
    int count = 0, in_word = 0;
    for (int i = 0; str[i]; i++) {
        if (!isspace(str[i]) && !in_word) {
            in_word = 1;
            count++;
        } else if (isspace(str[i])) {
            in_word = 0;
        }
    }
    return count;
}
