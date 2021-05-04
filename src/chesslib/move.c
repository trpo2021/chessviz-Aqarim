#include "move.h"

/*
move - the procedure chess figure move
*/

void move(char** board, int* coordinates)
{
    board[coordinates[2]][coordinates[3]] = board[coordinates[0]][coordinates[1]];
    board[coordinates[0]][coordinates[1]] = ' ';

    board[coordinates[6]][coordinates[7]] = board[coordinates[4]][coordinates[5]];
    board[coordinates[4]][coordinates[5]] = ' ';
}
