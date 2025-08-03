#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "day5.4.h"

int main() {
    srand(time(NULL));

    int p1 = 0, p2 = 0;

    while (p1 < WIN_POSITION && p2 < WIN_POSITION) {
        printf("\nPlayer 1's Turn (Press Enter to roll dice): ");
        getchar();
        p1 = play_turn(p1);
        display_board(p1, p2);
        if (p1 >= WIN_POSITION) break;

        printf("\nPlayer 2's Turn (Computer):\n");
        p2 = play_turn(p2);
        display_board(p1, p2);
    }

    if (p1 >= WIN_POSITION) {
        printf("\n🏆 Player 1 (You) won the game!\n");
    } else {
        printf("\n🤖 Player 2 (Computer) won the game!\n");
    }

    return 0;
}
