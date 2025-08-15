#include "day7.5.h"

void add_contact_text(const char *filename, Contact c) {
    FILE *fp = fopen(filename, "a");
    if (!fp) {
        perror("Error opening file");
        return;
    }
    fprintf(fp, "%s %s\n", c.name, c.phone);
    fclose(fp);
}

void display_contacts_text(const char *filename) {
    FILE *fp = fopen(filename, "r");
    if (!fp) {
        perror("Error opening file");
        return;
    }
    Contact c;
    while (fscanf(fp, "%s %s", c.name, c.phone) == 2) {
        printf("Name: %s, Phone: %s\n", c.name, c.phone);
    }
    fclose(fp);
}
