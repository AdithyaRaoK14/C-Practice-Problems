#include <stdio.h>
#include <stdlib.h>
#include<assert.h>
#include "day5.h"
#include "matrix.h"

int main()
{
    Smatrix *test;
    Dmatrix *tester;

    test = intialise_smatrix(3,3);
    assert(test != NULL);
    assert(test->col == 3);
    assert(test->row == 3);

    assert(insert_smatrix(test));
    assert(*(test->arr) == 0);
    assert(*(test->arr + 3) == 1);
    assert(*(test->arr + 5) == 3);
    assert(*(test->arr + 8) == 4);

    display_smatrix(test);
    test = deallocate_smatrix(test);

    tester = initialise_dmatrix(3, 3);
    assert(tester != NULL);
    assert(tester->row == 3);
    assert(tester->col == 3);

    assert(insert_dmatrix(tester));
    assert(*(*(tester->mtrx)+2) == 2);
    assert(*(*(tester->mtrx + 1)+1) == 2);
    assert(*(*(tester->mtrx + 2)+1) == 3);

    display_dmatrix(tester);
    deallocate_dmatrix(tester);
    return 0;
}
