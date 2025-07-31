#include "day2.11.h"

int calculateBill(int units) {
    int bill = 0;
    if (units <= 200) bill = units * 5;
    else if (units <= 300) bill = 200 * 5 + (units - 200) * 7;
    else bill = 200 * 5 + 100 * 7 + (units - 300) * 10;
    return bill;
}