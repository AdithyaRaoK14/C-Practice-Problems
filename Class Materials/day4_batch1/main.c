#include <stdio.h>
#include <stdlib.h>
#include<assert.h>
#include<string.h>

#include "day4.h"

#define ROW 3
#define COL 3

int main()
{
    /*
    int matrix[ROW][COL];

    insert_matrix(ROW, COL, matrix);
    display_matrix(ROW, COL, matrix);
    */
    Company test;
    Employee emp;

    test = initialize_company(5, "amd");
    assert(test.c_size == 0);
    assert(test.t_size == 5);
    assert(!strcmp(test.company_name,"amd"));

    emp.emp_id = 1001;
    strcpy(emp.emp_designation,"Manager");
    strcpy(emp.emp_name,"Riya");
    emp.emp_salary = 100000;

    test = insert_employee(emp, test);
    assert(test.c_size == 1);
    assert(test.emp[0].emp_id == 1001);

     emp.emp_id = 1002;
    strcpy(emp.emp_designation,"Sr. Manager");
    strcpy(emp.emp_name,"Riyaz");
    emp.emp_salary = 200000;

    test = insert_employee(emp, test);

     emp.emp_id = 1003;
    strcpy(emp.emp_designation,"Manager");
    strcpy(emp.emp_name,"Priya");
    emp.emp_salary = 100000;

    test = insert_employee(emp, test);

     emp.emp_id = 1004;
    strcpy(emp.emp_designation,"Manager");
    strcpy(emp.emp_name,"Diya");
    emp.emp_salary = 100000;

    test = insert_employee(emp, test);

     emp.emp_id = 1005;
    strcpy(emp.emp_designation,"Manager");
    strcpy(emp.emp_name,"Riyan");
    emp.emp_salary = 100000;

    test = insert_employee(emp, test);
    assert(test.c_size == 5);
    assert(test.trans_status == SUCCESS);

     emp.emp_id = 1006;
    strcpy(emp.emp_designation,"Manager");
    strcpy(emp.emp_name,"Raj");
    emp.emp_salary = 100000;

    test = insert_employee(emp, test);
    assert(test.trans_status == ARRAY_FULL);

    assert(search_employee(test, "Riyaz") == FOUND);
    assert(search_employee(test, "Riyan") == FOUND);
    assert(search_employee(test, "Raj") == NOT_FOUND);

    assert(get_employee_data(test, 1003, &emp) == FOUND);
    assert(!strcmp(emp.emp_name, "Priya"));

    return 0;
}
