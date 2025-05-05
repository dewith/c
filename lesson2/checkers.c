/*
 * Program: Checkers
 * Author: Udacity
 * Date: 2025-05-05
 * Description: A program that prints a checkers board on the console, the
 * purpose is to learn the concept of 2D arrays.
 */

#include <stdio.h>

int main() {
    const char b = 'B';  // Black checker piece
    const char r = 'R';  // Eed checker piece
    const char e = ' ';  // Empty space

    char checker_board[8][8];

    for (int i = 0; i < 8; i++) {
        switch (i) {
            case 0:
                for (int j = 0; j < 8; j++) {
                    // Add red pieces in odd indices
                    checker_board[i][j] = j % 2 == 0 ? e : r;
                }
                break;
            case 1:
                for (int j = 0; j < 8; j++) {
                    // Add red pieces in even indices
                    checker_board[i][j] = j % 2 == 0 ? r : e;
                }
                break;
            case 2:
                for (int j = 0; j < 8; j++) {
                    // Add red pieces in odd indices
                    checker_board[i][j] = j % 2 == 0 ? e : r;
                }
                break;
            case 5:
                for (int j = 0; j < 8; j++) {
                    // Add black in even indices
                    checker_board[i][j] = j % 2 == 0 ? b : e;
                }
                break;
            case 6:
                for (int j = 0; j < 8; j++) {
                    // Add black in odd indices
                    checker_board[i][j] = j % 2 == 0 ? e : b;
                }
                break;
            case 7:
                for (int j = 0; j < 8; j++) {
                    // Add black in even indices
                    checker_board[i][j] = j % 2 == 0 ? b : e;
                }
                break;

            default: // Middle rows
                for (int j = 0; j < 8; j++) {
                    // Adds spaces in all indices 
                    checker_board[i][j] = e;
                }
                break;      
        }
    }

    printf("Checkers Board:\n");
    for (int i = 0; i < 8; i++) {
        printf("[ ");
        for (int j = 0; j < 8; j++) {
            printf("%c ", checker_board[i][j]);
        }
        printf("]\n");

    }
    return 0;
}
