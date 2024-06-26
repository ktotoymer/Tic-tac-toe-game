//
// Created by Mikhail Alexeev on 28.03.2024.
//
#include <stdio.h>

#define SIZE 3

void show_pole(char pole[][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            switch (pole[i][j]) {
                case 1:
                    printf("x");
                    break;
                case 2:
                    printf("o");
                    break;
                default:
                    printf("#");
            }
            if (j < SIZE - 1)
                printf(" ");
        }
        printf("\n");
    }
}

int is_win(char pole[][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        if (pole[i][0] == 1 && pole[i][1] == 1 && pole[i][2] == 1)
            return 1;
        if (pole[i][0] == 2 && pole[i][1] == 2 && pole[i][2] == 2)
            return 2;
        if (pole[0][i] == 1 && pole[1][i] == 1 && pole[2][i] == 1)
            return 1;
        if (pole[0][i] == 2 && pole[1][i] == 2 && pole[2][i] == 2)
            return 2;
    }
    if ((pole[0][0] == 1 && pole[1][1] == 1 && pole[2][2] == 1) ||
        (pole[0][2] == 1 && pole[1][1] == 1 && pole[2][0] == 1))
        return 1;
    if ((pole[0][0] == 2 && pole[1][1] == 2 && pole[2][2] == 2) ||
        (pole[0][2] == 2 && pole[1][1] == 2 && pole[2][0] == 2))
        return 2;

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (pole[i][j] == 0)
                return 0;
        }
    }
    return 3;
}

void winner(char pole[][SIZE], int res) {
    switch (res) {
        case 1:
            show_pole(pole);
            printf("Победили крестики");
            break;
        case 2:
            show_pole(pole);
            printf("Победили нолики");
            break;
        case 3:
            show_pole(pole);
            printf("Ничья");
            break;
        default:
            show_pole(pole);
            printf("Игра не окончена");
    }
}

int check_position(char pole[][SIZE], int x, int y) {
    if (pole[x - 1][y - 1] != 0) {
        return 0;
    } else {
        return 1;
    }
}