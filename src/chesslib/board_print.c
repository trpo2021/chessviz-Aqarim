#include "board_print.h"
#include <stdio.h>
#include <stdlib.h>

const int size = 8;

/*
board_print - the procedure for displaying the board on the screen
*/

void board_print(char** board)
{
    for (int i = 0; i < size; ++i) {
        printf("%d ", size - i);
        for (int j = 0; j < size; ++j) {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
    printf(" a b c d e f g h\n");
}
