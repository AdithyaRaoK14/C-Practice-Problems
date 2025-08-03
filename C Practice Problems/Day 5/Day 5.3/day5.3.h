#ifndef DAY5_3_H
#define DAY5_3_H

#define ITEM_COUNT 5

typedef struct {
    int price;
    int quantity;
} Item;

int calc_total(Item *items, int count);
float calc_discount(int total);
float calc_grand_total(int total);
void print_bill(Item *items, int count);

#endif
