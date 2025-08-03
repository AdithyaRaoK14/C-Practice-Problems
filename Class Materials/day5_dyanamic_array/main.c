#include <stdio.h>
#include <stdlib.h>
#include<assert.h>
#include "day5.h"


int main()
{
    Array *test, *temp;

    test = initialise_array(5);
    assert(test != NULL);
    assert(test->c_size == 0);
    assert(test->t_size == 5);
    assert(test->arr != NULL);

    assert(insert_data(test, 11) == TRANS_SUCCESS);
    assert(insert_data(test, 20) == TRANS_SUCCESS);
    assert(insert_data(test, 33) == TRANS_SUCCESS);
    assert(insert_data(test, 40) == TRANS_SUCCESS);
    assert(insert_data(test, 55) == TRANS_SUCCESS);
    assert(test->c_size == test->t_size);
    assert(*(test->arr + 4) == 55);

    assert(insert_data(test, 60) == ARRAY_FULL);

    assert(search(test, 11));
    assert(search(test, 33));
    assert(search(test, 55));
    assert(search(test, 60) == NOT_FOUND);

    temp = copy_even_elements(test);
    assert(temp->c_size == 2);
    assert(temp->arr[0] == 20);
    assert(temp->arr[1] == 40);

    test =deallocate(test);
    temp = deallocate(temp);
    return 0;
}
