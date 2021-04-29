#incude "convert_str_to_coords.h"

const int size_str = 10;

/*
convet_str_to_coords - the procedure converting a chess notation to coordinates of board
*/

void convert_str_to_coords(char* move, int* coordinates)
{
    int j = 0;
    for (int i = 0; i <= size_str; ++i) {
        if ((move[i] >= '0') && (move[i] <= '9')) {
            coordinates[j] = 8 - (move[i] - '0');
            j += 2;
        }
        if ((move[i] >= 'a') && (move[i] <= 'z')) {
            coordinates[j + 1] = move[i] - 'a';
        }
    }
}
