#include <chesslib/board_content.h>
#include <chesslib/board_print.h>
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
    board_print(board);

    for (int i = 0; i < size; ++i) {
        delete board[i];
    }
    delete board;
    board = NULL;

    return 0;
}
