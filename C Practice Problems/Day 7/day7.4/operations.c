#include "day7.4.h"

void separate_odd_even(const char *filename) {
    FILE *fp = fopen(filename, "r");
    if (!fp) {
        perror("Error opening input file");
        return;
    }
    FILE *feven = fopen("even.txt", "w");
    FILE *fodd = fopen("odd.txt", "w");

    if (!feven || !fodd) {
        perror("Error creating output files");
        fclose(fp);
        return;
    }

    int num;
    while (fscanf(fp, "%d", &num) == 1) {
        if (num % 2 == 0)
            fprintf(feven, "%d\n", num);
        else
            fprintf(fodd, "%d\n", num);
    }

    fclose(fp);
    fclose(feven);
    fclose(fodd);
}
