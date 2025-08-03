#include "day5.3.h"

int main() {
    Item items[ITEM_COUNT] = {
        {200, 1}, {400, 1}, {200, 3}, {10, 5}, {50, 2}
    };

    print_bill(items, ITEM_COUNT);
    return 0;
}
