#include <chesslib/board_content.h>
#include <chesslib/game_process.h>
#include <stdio.h>
#include <stdlib.h>

const int size = 8;

int main()
{
    char** board = new char*[size];

    for (int i = 0; i < size; ++i) {
        board[i] = new char[size];
    }

    board_content(board);
    game_process(board);

    for (int i = 0; i < size; ++i) {
        delete board[i];
    }
    delete board;
    board = NULL;

    return 0;
}
