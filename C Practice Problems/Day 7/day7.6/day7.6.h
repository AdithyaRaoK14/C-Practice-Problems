#ifndef DAY7_6_H
#define DAY7_6_H

#define MAX_NAME 50
#define MAX_ADDRESS 100
#define MAX_PHONE 15

#define SUCCESS 1
#define FAILURE 0

typedef struct {
    char name[MAX_NAME];
    char address[MAX_ADDRESS];
    char phone[MAX_PHONE];
} Contact;

int add_contact(const char *filename, Contact contact);
int delete_contact(const char *filename, const char *name);
int edit_contact(const char *filename, const char *name, Contact new_contact);
int search_contact(const char *filename, const char *name);
void display_all_contacts(const char *filename);

#endif
