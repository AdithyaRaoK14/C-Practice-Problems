#define COL_ALLOC_FAIL NULL
#define ROW_ALLOC_FAIL NULL

struct _matrix_double_pointer_
{
    int **mtrx;
    int row, col;
};
typedef struct _matrix_double_pointer_ Dmatrix;

Dmatrix * initialise_dmatrix(int row, int col);
int insert_dmatrix(Dmatrix *);
void display_dmatrix(Dmatrix *);
Dmatrix * deallocate_dmatrix(Dmatrix *);
