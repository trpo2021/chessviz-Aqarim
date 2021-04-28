#include "board_content.h"

/*
board_content - the procedure for filling a chessboard with figures, numbers,
and letters

8 r n b q k b n r
7 p p p p p p p p
6
5
4
3
2 P P P P P P P P
1 R N B Q K B N R
  a b c d e f g h

lowercase characters are used to represent the black shapes
Uppercase characters are used to represent the white shapes

K(k) - king
Q(q) - queen
R(r) - rook
N(n) - kNight
B(b) - bishop
P(p) - pawn
*/

void board_content(char** board)
{
    // Black shapes:
    board[0][0] = 'r';
    board[0][1] = 'n';
    board[0][2] = 'b';
    board[0][3] = 'q';
    board[0][4] = 'k';
    board[0][5] = 'b';
    board[0][6] = 'n';
    board[0][7] = 'r';

    // White shapes:
    board[7][0] = 'R';
    board[7][1] = 'N';
    board[7][2] = 'B';
    board[7][3] = 'Q';
    board[7][4] = 'K';
    board[7][5] = 'B';
    board[7][6] = 'N';
    board[7][7] = 'R';

    for (int i = 0; i < 8; ++i) {
        board[1][i] = 'p'; // black
        board[6][i] = 'P'; // white
    }

    // Empty cells:
    for (int i = 2; i < 6; ++i) {
        for (int j = 0; j < 8; ++j) {
            board[i][j] = ' ';
        }
    }
}
