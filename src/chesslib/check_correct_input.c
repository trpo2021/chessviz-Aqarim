#include "check_correct_input.h"

/*
check_correct_input - the procedure for verifying the correct input
*/

bool check_correct_input(int* coordinates)
{
    for (int i = 0; i < 8; ++i) {
        if (!((coordinates[i] >= 0) && (coordinates[i] <= 7)))
            return false;
    }
    return true;
}
