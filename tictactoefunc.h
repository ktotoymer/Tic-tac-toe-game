//
// Created by Mikhail Alexeev on 28.03.2024.
//

#ifndef TIC_TAC_TOE_GAME_TICTACTOEFUNC_H
#define TIC_TAC_TOE_GAME_TICTACTOEFUNC_H

#define SIZE 3

void show_pole(char pole[][SIZE]);

int is_win(char pole[][SIZE]);

void winner(char pole[][SIZE], int res);

int check_position(char pole[][SIZE], int x, int y);

#endif //TIC_TAC_TOE_GAME_TICTACTOEFUNC_H
