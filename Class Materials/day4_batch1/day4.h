void insert_matrix(int row, int col,int matrix[][col]);
void display_matrix(int row, int col, int matrix[][col]);

#define MAX_EMPLOYEE 20
#define NAME_SIZE 18
#define DESIGNATION_SIZE 20
#define ARRAY_FULL 9
#define SUCCESS 1
#define NOT_FOUND 0
#define FOUND 1

struct _employee_
{
    int emp_id;
    char emp_name[NAME_SIZE];
    char emp_designation[DESIGNATION_SIZE];
    float emp_salary;
};
typedef struct _employee_ Employee;

struct _company_
{
    Employee emp[MAX_EMPLOYEE];
    int c_size, t_size;
    char company_name[NAME_SIZE];
    int trans_status;
};
typedef struct _company_ Company;

Company initialize_company(int total_size, char company[]);
Company insert_employee(Employee emp, Company amd);
int search_employee(Company, char *name);
int get_employee_data(Company, int id, Employee *);
