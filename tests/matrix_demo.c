#include <stdio.h>
#include <stdlib.h>
#include "decision.h"

int main(void)
{
    int rows = 3;
    int cols = 3;

    double *matrix = create_matrix(rows, cols);

    if (matrix == NULL) {
        fprintf(stderr, "Matrix allocation failed.\n");
        return 1;
    }

    double values[3][3] = {
        {40, 70, 90},
        {60, 50, 80},
        {30, 100, 60}
    };

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i * cols + j] = values[i][j];
        }
    }

    print_matrix(matrix, rows, cols);

    free(matrix);
    return 0;
}