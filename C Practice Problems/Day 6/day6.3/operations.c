#include <stdlib.h>
#include "day6.3.h"

Point *allocate_points(int n) {
    return (Point *)malloc(sizeof(Point) * n);
}

Point *max_weight_point(Point *p, int n) {
    int max = 0;
    for(int i = 1; i < n; i++) {
        if(p[i].weight > p[max].weight)
            max = i;
    }
    return &p[max];
}

void count_lines(Point *p, int n, int *v_lines, int *h_lines) {
    *v_lines = *h_lines = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(p[i].x == p[j].x) (*v_lines)++;
            else if(p[i].y == p[j].y) (*h_lines)++;
        }
    }
}

void free_points(Point *p) {
    free(p);
}
