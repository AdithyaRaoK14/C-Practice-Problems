#ifndef DAY6_3_H
#define DAY6_3_H

typedef struct {
    int x, y, weight;
} Point;

Point *allocate_points(int n);
Point *max_weight_point(Point *p, int n);
void count_lines(Point *p, int n, int *v_lines, int *h_lines);
void free_points(Point *p);

#endif
