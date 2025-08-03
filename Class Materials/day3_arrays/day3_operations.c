#include<stdio.h>
#include "day3.h"

int insert_data(int arr[], int size)
{
    int i;

    for(i=0; i<size; i++)
        arr[i] = i+1;
    return SUCCESS;
}

void display(int arr[], int size)
{
    int i;

    for(i=0; i<size; i++)
        printf("%d ",arr[i]);

}
int search(int arr[], int size, int element)
{
    int i;

    for(i=0; i<size; i++)
        if(arr[i] == element)
            return FOUND;
    return NOT_FOUND;
}

int max_min(int arr[], int size, int *max, int *min)
{
    int i;
    if(0 == size) return ARRAY_EMPTY;

    *max = *min = arr[0];
    for(i=1; i<size; i++)
    {
        if(arr[i] > *max)
            *max = arr[i];
        if(arr[i] < *min)
            *min = arr[i];
    }
    return SUCCESS;
}
int is_palindrome(int arr[], int size)
{
    int i, j;

    for(i=0, j=size-1; i < j; i++, j--)
    {
        if(arr[i] != arr[j])
            return NOT_PALINDROME;
    }
    return ITS_PALINDROME;
}

int delete_element(int arr[], int size, int element, int *result);
int sort(int arr[], int size);

