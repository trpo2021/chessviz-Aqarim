#include "board_print.h"
#include "check_correct_input.h"
#include "enter_move.h"
#include "game_process.h"
#include "move.h"
#include <stdio.h>

const int size_cords = 8;

/*
game_process - the procedure of playing a chess
*/

void game_process(char** board)
{
    int coordinates[size_cords];
    do {
        board_print(board);
        enter_move(coordinates);
        if (check_correct_input(coordinates))
            move(board, coordinates);
        else
            printf("Input Error!\n");
    } while (true);
}
