#include <stdio.h>
const int a = 8;

int main()
{
    char table[a][a];

    // create table
    for (int i = 0; i < a; ++i) {
        for (int j = 0; j < a; ++j) {
            table[i][j] = '0';
        }
    }

    // pawns
    for (int i = 0; i < a; ++i) {
        table[1][i] = 'P';
        table[6][i] = 'p';
    }

    // otcher
    table[0][0] = 'r';
    table[0][7] = 'r';
    table[7][0] = 'R';
    table[7][7] = 'R';
    table[0][1] = 'n';
    table[0][6] = 'n';
    table[7][1] = 'N';
    table[7][6] = 'N';
    table[0][2] = 'b';
    table[0][5] = 'b';
    table[7][2] = 'B';
    table[7][5] = 'B';
    table[0][3] = 'q';
    table[7][3] = 'Q';
    table[0][4] = 'k';
    table[7][4] = 'K';

    // print table
    for (int i = 0; i < a; ++i) {
        printf("%d ", a - i);
        for (int j = 0; j < a; ++j) {
            printf("%c ", table[i][j]);
        }
        printf("\n");
    }
    printf("  a b c d e f g h");

    return 0;
}
