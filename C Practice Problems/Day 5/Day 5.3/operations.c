#include <stdio.h>
#include "day5.3.h"

int calc_total(Item *items, int count) {
    int total = 0;
    for(int i = 0; i < count; i++)
        total += items[i].price * items[i].quantity;
    return total;
}

float calc_discount(int total) {
    if(total < 1000) return total * 0.05f;
    if(total < 5000) return total * 0.10f;
    return total * 0.15f;
}

float calc_grand_total(int total) {
    return total - calc_discount(total);
}

void print_bill(Item *items, int count) {
    int total = calc_total(items, count);
    float discount = calc_discount(total);
    float grand_total = total - discount;

    printf("Item\tPrice\tQty\tSubtotal\n");
    for(int i = 0; i < count; i++) {
        int sub = items[i].price * items[i].quantity;
        printf("Item%d\t%d\t%d\t%d\n", i+1, items[i].price, items[i].quantity, sub);
    }
    printf("----------------------------------\n");
    printf("TOTAL\t\t\t%d\n", total);
    printf("Discount\t\t-%.2f\n", discount);
    printf("GRAND TOTAL\t\t%.2f\n", grand_total);
}
