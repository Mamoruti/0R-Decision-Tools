
#include <stdlib.h>
#include <stdio.h>
#include "decision.h"
#include <stdint.h>


double *create_matrix(int rows, int cols) {

    if (rows <= 0 || cols <= 0) {


        return NULL;
    }
        //check/ prevent overflows//
     if ((size_t)rows  > SIZE_MAX / sizeof(double)  / (size_t)cols) {
  
        return NULL;

    }


    double *matrix = malloc((size_t)rows * (size_t)cols *sizeof(double));

    return matrix;


}


void print_matrix(const double *matrix, int rows, int cols)
{
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%8.2f", matrix[i * cols + j]);
        }
        printf("\n");
    }
}
