#include "day3.5.h"

int remove_duplicates(int arr[], int size) {
    int temp[100], index = 0;
    for (int i = 0; i < size; i++) {
        int exists = 0;
        for (int j = 0; j < index; j++) {
            if (arr[i] == temp[j]) {
                exists = 1;
                break;
            }
        }
        if (!exists) temp[index++] = arr[i];
    }
    for (int i = 0; i < index; i++) arr[i] = temp[i];
    return index;
}
