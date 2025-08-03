#include <stdio.h>
#include <stdlib.h>
#include<assert.h>
#include<string.h>
#include "day4.h"

#define ROW 3
#define COL 3
int main()
{
   /* int matrix[ROW][COL];
    generate_pattern1(5);
    generate_pattern2(5);

    create_matrix(ROW, COL, matrix);
    display_matrix(ROW, COL, matrix);
    */
    Student std;
    Course test_course;
    test_course = initialise_course(10, "Security", 2025);
    assert(test_course.t_intake == 10);
    assert(test_course.c_intake == 0);
    assert(test_course.year == 2025);
    assert(strcmp(test_course.course_name,"Security") == 0);

    std.reg_no = 1001;
    strcpy(std.std_name, "Siya");
    strcpy(std.state, "Jammu");
    strcpy(std.std_contact,"9998787654");

    test_course = insert_student_data(std, test_course);
    assert(test_course.c_intake == 1);
    assert(test_course.stud[test_course.c_intake-1].reg_no == 1001);

    std.reg_no = 1002;
    strcpy(std.std_name, "Diya");
    strcpy(std.state, "Kar");
    strcpy(std.std_contact,"9988787654");

    test_course = insert_student_data(std, test_course);
    assert(test_course.c_intake == 2);
    assert(test_course.stud[test_course.c_intake-1].reg_no == 1002);


     std.reg_no = 1003;
    strcpy(std.std_name, "Riya");
    strcpy(std.state, "Kar");
    strcpy(std.std_contact,"9997787654");

    test_course = insert_student_data(std, test_course);
    assert(test_course.c_intake == 3);
    assert(test_course.stud[test_course.c_intake-1].reg_no == 1003);


     std.reg_no = 1004;
    strcpy(std.std_name, "Raj");
    strcpy(std.state, "Jammu");
    strcpy(std.std_contact,"9998787654");

    test_course = insert_student_data(std, test_course);


    std.reg_no = 1005;
    strcpy(std.std_name, "rahan");
    strcpy(std.state, "Jammu");
    strcpy(std.std_contact,"9998787654");

    test_course = insert_student_data(std, test_course);


    std.reg_no = 1006;
    strcpy(std.std_name, "Mahan");
    strcpy(std.state, "Kerala");
    strcpy(std.std_contact,"9898787654");

    test_course = insert_student_data(std, test_course);


    std.reg_no = 1007;
    strcpy(std.std_name, "Jahan");
    strcpy(std.state, "Jammu");
    strcpy(std.std_contact,"9998787654");

    test_course = insert_student_data(std, test_course);


    std.reg_no = 1008;
    strcpy(std.std_name, "Sam");
    strcpy(std.state, "Kerala");
    strcpy(std.std_contact,"9998787654");

    test_course = insert_student_data(std, test_course);


    std.reg_no = 1009;
    strcpy(std.std_name, "rahan");
    strcpy(std.state, "Jammu");
    strcpy(std.std_contact,"9998787654");

    test_course = insert_student_data(std, test_course);



    std.reg_no = 1010;
    strcpy(std.std_name, "rahan");
    strcpy(std.state, "Jammu");
    strcpy(std.std_contact,"9998787654");

    test_course = insert_student_data(std, test_course);
    assert(test_course.trans_status == STUDENT_ADMITTED);


    std.reg_no = 1011;
    strcpy(std.std_name, "Mir");
    strcpy(std.state, "Jammu");
    strcpy(std.std_contact,"9998787654");

    test_course = insert_student_data(std, test_course);
    assert(test_course.trans_status == SEATS_FULL);


    assert(search_student(test_course,"Siya"));
    assert(search_student(test_course,"Sam"));
    assert(search_student(test_course,"Mir") == NOT_FOUND);


    return 0;
}
