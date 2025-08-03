#include<stdio.h>
#include<string.h>
#include "day4.h"

void generate_pattern1(int n)
{
    int i, j;

    for(i = 0; i < n; i++){
        for(j = 0; j <= i; j++)
            printf("%c  ",'*');
        printf("\n");
    }
}

void generate_pattern2(int n)
{
    int i, j;

    printf("\n\n");

    for(i = n; i > 0; i--){
        for(j = i; j > 0; j--)
            printf("%c  ",'*');
        printf("\n");
    }
}

void create_matrix(int row, int col, int matrix[][col])
{
    int i, j;

    for(i=0; i<row; i++)
        for(j=0; j<col; j++)
            matrix[i][j] = i+j;
}

void display_matrix(int row, int col, int matrix[][col])
{
    int i, j;

    for(i=0; i<row; i++){
        for(j=0; j<col; j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }
}



Course initialise_course(int total_intake, char *course_name, int year)
{
    Course security;

    security.t_intake = total_intake;
    security.c_intake = 0;
    strcpy(security.course_name,course_name);
    security.year = year;

    return security;
}
Course insert_student_data(Student std, Course security)
{
    if(security.c_intake == security.t_intake){
        security.trans_status = SEATS_FULL;
        return security;
    }

    security.stud[security.c_intake].reg_no = std.reg_no;
    strcpy(security.stud[security.c_intake].std_name, std.std_name);
    strcpy(security.stud[security.c_intake].std_contact,std.std_contact);
    strcpy(security.stud[security.c_intake].state,std.state);
    security.c_intake++;
    security.trans_status = STUDENT_ADMITTED;

    return security;
}


int search_student(Course security, char *name)
{
    int i;

    for(i=0; i<security.c_intake;i++)
        if(!strcmp(security.stud[i].std_name, name))
            return FOUND;
    return NOT_FOUND;
}
int count_by_state(Course, char *state_name);
void display_student_data(Course, int regNo);
