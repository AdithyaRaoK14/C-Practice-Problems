#include "day3.17.h"

void count_frequency(const char *str, int freq[256]) {
    for (int i = 0; i < 256; i++) freq[i] = 0;
    for (int i = 0; str[i]; i++) freq[(unsigned char)str[i]]++;
}
