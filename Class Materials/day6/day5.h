#define INT_ALLOC_FAIL NULL
#define MATRIX_ALLOC_FAIL NULL
#define SUCCESS 1
#define FAIL 0


struct _single_pointer_matrix_
{
    int *arr;
    int row, col;
};
typedef struct _single_pointer_matrix_ Smatrix;

Smatrix * intialise_smatrix(int row, int col);
int insert_smatrix(Smatrix *);
void display_smatrix(Smatrix *);
Smatrix *deallocate_smatrix(Smatrix *);
