#define ALLOCATION_ARRAY_FAILED NULL
#define INT_ALLOC_FAIL NULL
#define TRANS_SUCCESS 1
#define TRANS_FAILED -1
#define ARRAY_FULL 9
#define FOUND 1
#define NOT_FOUND 0
#define NOT_PALI 0
#define IS_PALI 1

struct _array_
{
    int *arr;
    int c_size, t_size;
};
typedef struct _array_ Array;

struct _temp_array_
{
    Array data;
    int status;
};
typedef struct _temp_array_ Tmp_array;

Tmp_array * initialise_temp_array(int);
Array * initialise_array(int);
int insert_data(Array *, int data);
int search(Array *, int element);
int is_palindrome(Array *);
Array * copy_even_elements(Array *);
Array *deallocate(Array *);
