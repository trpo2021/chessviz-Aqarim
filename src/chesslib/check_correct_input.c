#include "check_correct_input.h"
#include <stdio.h>
#include <stdlib.h>

const int size_cords = 8;

/*
check_correct_input - the procedure for verifying the correct input
*/

bool check_correct_input(int* coordinates)
{
    for (int i = 0; i < size_cords; ++i) {
        if (!((coordinates[i] >= 0) && (coordinates[i] <= 7)))
            return false;
    }
    return true;
}
