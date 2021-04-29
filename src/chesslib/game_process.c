#include "board_print.h"
#include "enter_move.h"

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
    } while (true);
}
