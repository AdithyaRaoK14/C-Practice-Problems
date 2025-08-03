#ifndef DAY5_1_H
#define DAY5_1_H

#define MAX_STUDENTS 10
#define NAME_LEN 30

typedef struct {
    int roll_no;
    char name[NAME_LEN];
    int age;
    float marks;
} Student;

void input_students(Student *students, int count);
void print_students(Student *students, int count);

#endif
