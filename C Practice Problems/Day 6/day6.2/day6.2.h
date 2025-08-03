#ifndef DAY6_2_H
#define DAY6_2_H

typedef struct {
    int roll;
    char name[30];
    int age;
    float marks;
} Student;

Student *allocate_students(int n);
Student *search_by_roll(Student *s, int n, int roll);
Student *search_by_name(Student *s, int n, char *name);
Student *get_topper(Student *s, int n);
void display_name_A(Student *s, int n);
void free_students(Student *s);

#endif
