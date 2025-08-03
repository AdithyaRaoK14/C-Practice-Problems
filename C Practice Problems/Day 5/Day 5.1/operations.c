#include <stdio.h>
#include <string.h>
#include "day5.1.h"

void input_students(Student *students, int count) {
    for(int i = 0; i < count; i++) {
        students[i].roll_no = i + 1;
        snprintf(students[i].name, NAME_LEN, "Student%d", i + 1);
        students[i].age = 18 + i;
        students[i].marks = 50 + i;
    }
}

void print_students(Student *students, int count) {
    for(int i = 0; i < count; i++) {
        printf("Roll: %d, Name: %s, Age: %d, Marks: %.2f\n",
               students[i].roll_no, students[i].name, students[i].age, students[i].marks);
    }
}
