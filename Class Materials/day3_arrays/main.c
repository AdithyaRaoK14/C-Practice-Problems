#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "day3.h"

#define SIZE 10

int main()
{
    int array[SIZE];
    int temp[SIZE] = {1,2,3,4,5,5,4,3,2,1};
    int test[SIZE] = {1,2,3,4,5,6,4,3,2,1};
    int i, max, min;

    assert(insert_data(array, SIZE)== SUCCESS);
    for(i=0; i<SIZE; i++)
        assert(array[i] == i+1);

    display(array, SIZE);

    assert(search(temp, SIZE, 8) == NOT_FOUND);
    assert(search(temp, SIZE, 3) == FOUND);

    assert(max_min(temp, SIZE,&max, &min) == SUCCESS);
    assert(max == 5);
    assert(min == 1);

    assert(is_palindrome(temp, SIZE) == ITS_PALINDROME);
    assert(is_palindrome(test, SIZE) == NOT_PALINDROME);

    return 0;
}
