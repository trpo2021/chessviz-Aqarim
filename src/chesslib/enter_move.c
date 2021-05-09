#include "enter_move.h"
#include "convert_str_to_coords.h"

#include <stdio.h>

const int size_str = 12;

/*
entrer_move - the procedure for entering chess notation
*/

void enter_move(int* coordinates)
{
    char move[size_str];
    char tmp;
    printf("Move: ");
    fgets(move, size_str, stdin);
    scanf("%c", &tmp);

    convert_str_to_coords(move, coordinates);
}
