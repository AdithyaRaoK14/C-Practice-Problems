#include<stdlib.h>
#include<stdio.h>
#include "day5.h"
#include "matrix.h"


Smatrix * intialise_smatrix(int row, int col)
{
    Smatrix *matrix;
    matrix = (Smatrix *)malloc(sizeof(Smatrix));
    if(NULL == matrix) return MATRIX_ALLOC_FAIL;

    matrix->col = col;
    matrix->row = row;
    matrix->arr = (int *)malloc(sizeof(int) * row * col);

    if(NULL == matrix->arr){
        free(matrix);
        return INT_ALLOC_FAIL;
    }
    return matrix;
}
int insert_smatrix(Smatrix *matrix)
{
    int i, j;

    if(matrix->col <= 0 || matrix->row <=0) return FAIL;

    for(i=0; i<matrix->row; i++)
        for(j=0; j<matrix->col; j++)
            *(matrix->arr+(i * matrix->col)+j) = i + j;
    return SUCCESS;
}
void display_smatrix(Smatrix *matrix)
{
    int i, j;

    if(matrix->col <= 0 || matrix->row <=0) return;

    for(i=0; i<matrix->row; i++){
        for(j=0; j<matrix->col; j++)
            printf("%d ",*(matrix->arr+(i * matrix->col)+j));
        printf("\n");
    }
}
Smatrix *deallocate_smatrix(Smatrix *matrix)
{
    if(NULL == matrix) return NULL;

    free(matrix->arr);
    free(matrix);
    return NULL;
}



Dmatrix * initialise_dmatrix(int row, int col)
{
    Dmatrix *matrix;
    int i, j;

    matrix = (Dmatrix *)malloc(sizeof(Dmatrix));
    if(NULL == matrix) return MATRIX_ALLOC_FAIL;

    matrix->row = row;
    matrix->col = col;
    // memory allocation for number of rows
    matrix->mtrx = (int **)malloc(sizeof(int *) * row);
    if(NULL == matrix->mtrx){
        free(matrix);
        return ROW_ALLOC_FAIL;
    }

    //allocating memory for columns of each row
    for(i=0; i<row; i++){
        *(matrix->mtrx + i) = (int *)malloc(sizeof(int) * col);
       //if allocation for either column fails deallocate memory
        if(*(matrix->mtrx + i) == NULL){
            for(j=0; j<i; j++)
                free(*(matrix->mtrx + j));
            free(matrix->mtrx);
            free(matrix);
            return COL_ALLOC_FAIL;
        }
    }
    return matrix;
}
int insert_dmatrix(Dmatrix *matrix)
{
    int i, j;

    for(i=0; i<matrix->row; i++)
        for(j=0; j<matrix->col; j++)
            *(*(matrix->mtrx +i) + j) = i+j;

    return SUCCESS;
}
void display_dmatrix(Dmatrix *matrix)
{
     int i, j;

    for(i=0; i<matrix->row; i++){
        for(j=0; j<matrix->col; j++)
            printf("%d ",*(*(matrix->mtrx +i) + j));
        printf("\n");
    }
}

Dmatrix * deallocate_dmatrix(Dmatrix *matrix)
{
    int j;
    if(NULL == matrix) return NULL;

    for(j=0; j<matrix->row; j++)
        free(*(matrix->mtrx + j));
    free(matrix->mtrx);
    free(matrix);

    return NULL;
}
