#ifndef DAY5_4_H
#define DAY5_4_H

#define WIN_POSITION 100
#define TRANS_SUCCESS 1
#define TRANS_FAILED -1

int roll_dice();
int move_player(int pos);
void display_board(int p1, int p2);
int play_turn(int current_pos);

#endif
