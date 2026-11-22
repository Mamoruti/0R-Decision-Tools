#include <stdio.h>
#include <stdlib.h>
#include "decision.h"

int main(void)
{
    int rows = 3;
    int cols = 3;

    double *matrix = create_matrix(rows, cols);
    if (matrix == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Matrix allocated successfully!\n");

    print_matrix(matrix, rows, cols);

    free(matrix);


    return 0;
}