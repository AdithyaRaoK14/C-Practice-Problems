#define NAME_SIZE 15
#define COURSE_SIZE 30
#define PHONE_SIZE 11
#define MAX_SEATS 30
#define SEATS_FULL 9
#define STUDENT_ADMITTED 1
#define FOUND 1
#define NOT_FOUND 0

void generate_pattern1(int);
void generate_pattern2(int);

void create_matrix(int row, int col, int matrix[][col]);
void display_matrix(int row, int col, int matrix[][col]);

struct _student_
{
    int reg_no;
    char std_name[NAME_SIZE];
    char std_contact[PHONE_SIZE];
    char state[NAME_SIZE];
};
typedef struct _student_ Student;

struct _course_
{
    Student stud[MAX_SEATS];
    int c_intake;
    int t_intake;
    char course_name[COURSE_SIZE];
    int year;
    int trans_status;
};
typedef struct _course_ Course;

Course initialise_course(int total_intake, char *course_name, int year);
Course insert_student_data(Student, Course);
int search_student(Course, char *name);
int count_by_state(Course, char *state_name);
void display_student_data(Course, int regNo);


