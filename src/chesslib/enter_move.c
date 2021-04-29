#include "convert_string_to_coordinates.h"

const int size_str = 10;

/*
entrer_move - the procedure for entering chess notation
*/

void enter_move(int* coordinates)
{
    char move[size_str];
    printf("Move: ");
    gets(move);

    convert_string_to_coordinates(move, coordinates);
}
