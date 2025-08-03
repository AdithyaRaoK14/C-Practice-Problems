#include <stdio.h>
#include <assert.h>
#include "day6.3.h"

int main() {
    int n = 4, v, h;
    Point *p = allocate_points(n);

    p[0] = (Point){0, 0, 5};
    p[1] = (Point){0, 2, 3};
    p[2] = (Point){2, 2, 10};
    p[3] = (Point){4, 2, 6};

    assert(max_weight_point(p, n)->weight == 10);
    count_lines(p, n, &v, &h);
    assert(v == 1); // p[0] & p[1]
    assert(h == 3); // p[1], p[2], p[3] all share y = 2

    free_points(p);
    return 0;
}
