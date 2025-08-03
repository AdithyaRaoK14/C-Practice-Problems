#include "day3.10.h"
#include <ctype.h>

void count_characters(const char *str, int *vowels, int *consonants, int *digits, int *spaces) {
    *vowels = *consonants = *digits = *spaces = 0;
    char ch;
    for (int i = 0; (ch = str[i]) != '\0'; i++) {
        if (isalpha(ch)) {
            ch = tolower(ch);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') (*vowels)++;
            else (*consonants)++;
        } else if (isdigit(ch)) (*digits)++;
        else if (isspace(ch)) (*spaces)++;
    }
}
