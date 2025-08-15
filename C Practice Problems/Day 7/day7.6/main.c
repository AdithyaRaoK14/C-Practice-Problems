#include <stdio.h>
#include <string.h>
#include "day7.6.h"

int main() {
    Contact c;
    int choice;
    char name[50];
    const char *filename = "directory.dat";

    while (1) {
        printf("\n--- Telephone Directory (Binary Mode) ---\n");
        printf("1. Add Contact\n2. Delete Contact\n3. Edit Contact\n4. Search Contact\n5. Display All\n6. Exit\nEnter choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1:
                printf("Enter name: ");
                fgets(c.name, MAX_NAME, stdin);
                c.name[strcspn(c.name, "\n")] = '\0';
                printf("Enter address: ");
                fgets(c.address, MAX_ADDRESS, stdin);
                c.address[strcspn(c.address, "\n")] = '\0';
                printf("Enter phone: ");
                fgets(c.phone, MAX_PHONE, stdin);
                c.phone[strcspn(c.phone, "\n")] = '\0';
                add_contact(filename, c);
                break;
            case 2:
                printf("Enter name to delete: ");
                fgets(name, 50, stdin);
                name[strcspn(name, "\n")] = '\0';
                if (delete_contact(filename, name)) printf("Deleted successfully.\n");
                else printf("Contact not found.\n");
                break;
            case 3:
                printf("Enter name to edit: ");
                fgets(name, 50, stdin);
                name[strcspn(name, "\n")] = '\0';
                printf("Enter new name: ");
                fgets(c.name, MAX_NAME, stdin);
                c.name[strcspn(c.name, "\n")] = '\0';
                printf("Enter new address: ");
                fgets(c.address, MAX_ADDRESS, stdin);
                c.address[strcspn(c.address, "\n")] = '\0';
                printf("Enter new phone: ");
                fgets(c.phone, MAX_PHONE, stdin);
                c.phone[strcspn(c.phone, "\n")] = '\0';
                if (edit_contact(filename, name, c)) printf("Edited successfully.\n");
                else printf("Contact not found.\n");
                break;
            case 4:
                printf("Enter name to search: ");
                fgets(name, 50, stdin);
                name[strcspn(name, "\n")] = '\0';
                if (!search_contact(filename, name)) printf("Contact not found.\n");
                break;
            case 5:
                display_all_contacts(filename);
                break;
            case 6:
                return 0;
            default:
                printf("Invalid choice.\n");
        }
    }
}

