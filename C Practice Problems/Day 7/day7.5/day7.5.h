#ifndef DAY7_5_H
#define DAY7_5_H

#include <stdio.h>

typedef struct {
    char name[50];
    char phone[15];
} Contact;

void add_contact_text(const char *filename, Contact c);
void display_contacts_text(const char *filename);

#endif
