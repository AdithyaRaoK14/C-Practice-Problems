#include "day7.2.h"

void copy_file(const char *src, const char *dest) {
    FILE *fsrc = fopen(src, "r");
    if (!fsrc) {
        perror("Error opening source file");
        return;
    }
    FILE *fdest = fopen(dest, "w");
    if (!fdest) {
        perror("Error opening destination file");
        fclose(fsrc);
        return;
    }
    int ch;
    while ((ch = fgetc(fsrc)) != EOF) {
        fputc(ch, fdest);
    }
    fclose(fsrc);
    fclose(fdest);
}
