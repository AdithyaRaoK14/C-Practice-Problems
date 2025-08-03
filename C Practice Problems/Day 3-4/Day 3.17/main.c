#include <stdio.h>
#include "day3.17.h"

int main() {
    char str[200];
    int freq[256];
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);
    count_frequency(str, freq);
    printf("Character Frequencies:\n");
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0 && i != '\n') printf("%c: %d\n", i, freq[i]);
    }
    return 0;
}
