#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "day6.2.h"

Student *allocate_students(int n) {
    return (Student *)malloc(sizeof(Student) * n);
}

Student *search_by_roll(Student *s, int n, int roll) {
    for(int i = 0; i < n; i++) {
        if(s[i].roll == roll) return &s[i];
    }
    return NULL;
}

Student *search_by_name(Student *s, int n, char *name) {
    for(int i = 0; i < n; i++) {
        if(strcmp(s[i].name, name) == 0) return &s[i];
    }
    return NULL;
}

Student *get_topper(Student *s, int n) {
    int max = 0;
    for(int i = 1; i < n; i++) {
        if(s[i].marks > s[max].marks)
            max = i;
    }
    return &s[max];
}

void display_name_A(Student *s, int n) {
    for(int i = 0; i < n; i++) {
        if(s[i].name[0] == 'A') {
            printf("Roll: %d Name: %s Age: %d Marks: %.2f\n", s[i].roll, s[i].name, s[i].age, s[i].marks);
        }
    }
}

void free_students(Student *s) {
    free(s);
}
