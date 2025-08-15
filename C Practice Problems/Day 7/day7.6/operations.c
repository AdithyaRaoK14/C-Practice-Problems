#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "day7.6.h"

int add_contact(const char *filename, Contact contact) {
    FILE *fp = fopen(filename, "ab");
    if (!fp) return FAILURE;
    fwrite(&contact, sizeof(Contact), 1, fp);
    fclose(fp);
    return SUCCESS;
}

int delete_contact(const char *filename, const char *name) {
    FILE *fp = fopen(filename, "rb");
    if (!fp) return FAILURE;
    FILE *temp = fopen("temp.dat", "wb");
    if (!temp) {
        fclose(fp);
        return FAILURE;
    }

    Contact c;
    int found = 0;
    while (fread(&c, sizeof(Contact), 1, fp)) {
        if (strcmp(c.name, name) != 0) {
            fwrite(&c, sizeof(Contact), 1, temp);
        } else {
            found = 1;
        }
    }

    fclose(fp);
    fclose(temp);

    remove(filename);
    rename("temp.dat", filename);
    return found ? SUCCESS : FAILURE;
}

int edit_contact(const char *filename, const char *name, Contact new_contact) {
    FILE *fp = fopen(filename, "rb+");
    if (!fp) return FAILURE;

    Contact c;
    while (fread(&c, sizeof(Contact), 1, fp)) {
        if (strcmp(c.name, name) == 0) {
            fseek(fp, -sizeof(Contact), SEEK_CUR);
            fwrite(&new_contact, sizeof(Contact), 1, fp);
            fclose(fp);
            return SUCCESS;
        }
    }
    fclose(fp);
    return FAILURE;
}

int search_contact(const char *filename, const char *name) {
    FILE *fp = fopen(filename, "rb");
    if (!fp) return FAILURE;

    Contact c;
    while (fread(&c, sizeof(Contact), 1, fp)) {
        if (strcmp(c.name, name) == 0) {
            printf("Name: %s\nAddress: %s\nPhone: %s\n", c.name, c.address, c.phone);
            fclose(fp);
            return SUCCESS;
        }
    }
    fclose(fp);
    return FAILURE;
}

void display_all_contacts(const char *filename) {
    FILE *fp = fopen(filename, "rb");
    if (!fp) {
        printf("No contacts found.\n");
        return;
    }

    Contact c;
    printf("\n--- Contact List ---\n");
    while (fread(&c, sizeof(Contact), 1, fp)) {
        printf("Name: %s\nAddress: %s\nPhone: %s\n\n", c.name, c.address, c.phone);
    }
    fclose(fp);
}
