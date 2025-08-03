#include<stdlib.h>
#include<assert.h>
#include "day5.h"

Array * initialise_array(int size)
{
    Array *my_arr;

    my_arr = (Array *)malloc(sizeof(Array));
    if(NULL == my_arr) return ALLOCATION_ARRAY_FAILED;

    my_arr->t_size = size;
    (*my_arr).c_size = 0;
    my_arr->arr = (int *)malloc(sizeof(int) * size);

    if(NULL == my_arr->arr){
        free(my_arr);
        return INT_ALLOC_FAIL;
    }

    return my_arr;
}

Tmp_array * initialise_temp_array(int size)
{
    Tmp_array *my_arr;

    my_arr = (Tmp_array *)malloc(sizeof(Tmp_array));
    if(NULL == my_arr) return ALLOCATION_ARRAY_FAILED;

    my_arr->data.t_size = size;
    (*my_arr).data.c_size = 0;
    my_arr->data.arr = (int *)malloc(sizeof(int) * size);

    if(NULL == my_arr->data.arr){
        free(my_arr);
        return INT_ALLOC_FAIL;
    }

    return my_arr;
}
int insert_data(Array *my_arr, int data)
{
    if(my_arr == NULL) return TRANS_FAILED;

    if(my_arr->c_size == my_arr->t_size) return ARRAY_FULL;

    *(my_arr->arr + my_arr->c_size) = data;
    my_arr->c_size++;

    return TRANS_SUCCESS;
}
int search(Array *my_arr, int element)
{
    int i;

    for(i=0; i<my_arr->c_size; i++)
        if(*(my_arr->arr + i) == element)
            return FOUND;
    return NOT_FOUND;
}
int is_palindrome(Array *my_arr)
{
    int i, j;

    for(i=0, j=my_arr->c_size-1; i < j; i++, j--)
    {
        if(*(my_arr->arr+ i) != *(my_arr->arr + j))
            return NOT_PALI;
    }
    return IS_PALI;
}

int get_even_numbers(Array *my_arr)
{
    int i, count = 0;
    for(i=0; i<my_arr->c_size;i++)
        if(my_arr->arr[i] % 2 == 0) count++;
    return count;
}
Array * copy_even_elements(Array *my_arr)
{
    int i;
    Array *temp = initialise_array(get_even_numbers(my_arr));

    for(i=0; i<my_arr->c_size;i++)
        if(my_arr->arr[i] % 2 == 0)
            assert(insert_data(temp, my_arr->arr[i]));
    return temp;
}



Array *deallocate(Array *my_arr)
{
    if(my_arr == NULL) return NULL;

    free(my_arr->arr);
    free(my_arr);

    return NULL;
}
