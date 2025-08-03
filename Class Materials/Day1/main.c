#include<assert.h>
#include "day1.h"

int main()
{
    //test for add 2 numbers

    assert(add(10,20) == 30);
    assert(add(5,10) == add(12,3));
    assert(add(-5, -6) == -11);

    //test for Subtracting two unsigned numbers
    assert(sub(20,10) == 10);
    assert(sub(10,10) == 0);
    assert(sub(5,10) == -5);
    assert(sub(-20,10) == -30);

    //check whether input is even
    assert(is_even(10) == 1);
    assert(is_even(7) == 0);
    assert(is_even(46) == 1);
    assert(is_even(17) == 0);

    return 0;
}
