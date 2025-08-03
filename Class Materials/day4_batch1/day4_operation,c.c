#include<stdio.h>
#include<string.h>
#include "day4.h"


void insert_matrix(int row, int col,int matrix[][col])
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



Company initialize_company(int total_size, char company[])
{
    Company amd;

    amd.c_size = 0;
    amd.t_size = total_size > 0 && //
        total_size <= MAX_EMPLOYEE?total_size:MAX_EMPLOYEE;
    strcpy(amd.company_name,company);

    return amd;
}

Company insert_employee(Employee emp, Company amd)
{
    if(amd.c_size == amd.t_size)
    {
        amd.trans_status = ARRAY_FULL;
        return amd;
    }

   // amd.emp[amd.c_size] = emp;
    amd.emp[amd.c_size].emp_id = emp.emp_id;
    amd.emp[amd.c_size].emp_salary = emp.emp_salary;
    strcpy(amd.emp[amd.c_size].emp_name, emp.emp_name);
    strcpy(amd.emp[amd.c_size].emp_designation, emp.emp_designation);
    amd.trans_status = SUCCESS;
    amd.c_size++;

    return amd;
}





int search_employee(Company amd, char *name)
{
    int i;

    for(i=0; i<amd.c_size; i++)
        if(!strcmp(amd.emp[i].emp_name, name))
           return FOUND;
    return NOT_FOUND;
}

int get_employee_data(Company amd, int id, Employee *emp)
{
   int i;

    for(i=0; i<amd.c_size;i++)
    if(amd.emp[i].emp_id == id){
            *emp = amd.emp[i];
            amd.trans_status = FOUND;
            return FOUND;
    }
    amd.trans_status = NOT_FOUND;
    return NOT_FOUND;
}
