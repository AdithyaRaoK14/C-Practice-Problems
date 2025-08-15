#include "day7.1.h"

void display_file_contents(const char *filename) {
    FILE *fp = fopen(filename, "r");
    if (!fp) {
        perror("Error opening file");
        return;
    }
    int ch;
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }
    fclose(fp);
}
