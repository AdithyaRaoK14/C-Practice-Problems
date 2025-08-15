#include "day7.3.h"

void count_file_stats(const char *filename) {
    FILE *fp = fopen(filename, "r");
    if (!fp) {
        perror("Error opening file");
        return;
    }
    int ch, chars = 0, spaces = 0, tabs = 0, lines = 0;
    while ((ch = fgetc(fp)) != EOF) {
        chars++;
        if (ch == ' ') spaces++;
        else if (ch == '\t') tabs++;
        else if (ch == '\n') lines++;
    }
    fclose(fp);
    printf("Characters: %d\nSpaces: %d\nTabs: %d\nLines: %d\n", chars, spaces, tabs, lines);
}
