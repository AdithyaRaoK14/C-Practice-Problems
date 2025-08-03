#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "day5.4.h"

int roll_dice() {
    return (rand() % 6) + 1;
}

int move_player(int pos) {
    switch(pos) {
        // Ladders
        case 3: return 22;
        case 5: return 8;
        case 11: return 26;
        case 20: return 29;
        case 27: return 56;
        case 43: return 77;

        // Snakes
        case 17: return 4;
        case 19: return 7;
        case 21: return 9;
        case 35: return 5;
        case 49: return 11;
        case 63: return 23;
        case 87: return 24;

        default: return pos;
    }
}

int play_turn(int current_pos) {
    int dice = roll_dice();
    printf("Rolled: %d\n", dice);
    if (current_pos + dice <= WIN_POSITION) {
        current_pos += dice;
        current_pos = move_player(current_pos);
    }
    return current_pos;
}

void display_board(int p1, int p2) {
    printf("\n--- Current Board State ---\n");
    printf("Player 1 (You): %d\n", p1);
    printf("Player 2 (Computer): %d\n", p2);
    printf("----------------------------\n");
}
