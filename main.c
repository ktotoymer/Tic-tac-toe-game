#include <stdio.h>
#include "tictactoefunc.h"

#define SIZE 3

int main() {
    char pole[SIZE][SIZE] = {0};
    int player = 1;
    while (!is_win(pole)) {
        show_pole(pole);
        int x, y;
        scanf("%d %d", &x, &y);
        if (player) {
            if (check_position(pole, x, y)) {
                pole[x - 1][y - 1] = 1;
            } else {
                printf("Нельзя поставить крестик в эту клеточку\n");
                continue;
            }
            player = 0;
        } else {
            if (check_position(pole, x, y)) {
                pole[x - 1][y - 1] = 2;
            } else {
                printf("Нельзя поставить нолик в эту клеточку\n");
                continue;
            }

            player = 1;
        }
    }
    winner(pole, is_win(pole));
    return 0;
}
