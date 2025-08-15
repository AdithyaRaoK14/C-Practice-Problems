#include "day7.5.h"

int main() {
    Contact c1 = {"Alice", "1234567890"};
    Contact c2 = {"Bob", "9876543210"};

    add_contact_text("directory.txt", c1);
    add_contact_text("directory.txt", c2);

    printf("Telephone Directory (Text Mode):\n");
    display_contacts_text("directory.txt");
    return 0;
}
