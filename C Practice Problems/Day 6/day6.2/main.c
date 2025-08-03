#include <stdio.h>
#include <assert.h>
#include <string.h>
#include "day6.2.h"

int main() {
    int n = 3;
    Student *s = allocate_students(n);

    s[0] = (Student){1, "Alice", 20, 90.5};
    s[1] = (Student){2, "Bob", 21, 85.0};
    s[2] = (Student){3, "Alex", 22, 92.0};

    assert(search_by_roll(s, n, 2)->marks == 85.0);
    assert(strcmp(search_by_name(s, n, "Alice")->name, "Alice") == 0);
    assert(strcmp(get_topper(s, n)->name, "Alex") == 0);

    display_name_A(s, n); // prints Alice and Alex
    free_students(s);
    return 0;
}
