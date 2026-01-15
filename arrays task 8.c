#include <stdio.h>

#define ROWS 6
#define COLS 4

int main() {
    int array[ROWS][COLS] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16},
        {17, 18, 19, 20},
        {21, 22, 23, 24}
    };
    int i, j;

    printf("Traversing the 2D array:\n");

    // Outer loop iterates over rows
    for (i = 0; i < ROWS; i++) {
        // Inner loop iterates over columns in the current row
        for (j = 0; j < COLS; j++) {
            printf("array[%d][%d] = %d\n", i, j, array[i][j]);
        }
    }

    return 0;
}
