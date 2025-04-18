#include <stdio.h>
#include <printf.h>

#define SIZE 8

int main() {
    int input[SIZE][SIZE];
    int kernel[SIZE][SIZE];
    int result = 0;
    int val = 1;

    // Fill input matrix with values from 1 to 64
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            input[i][j] = val++;
        }
    }

    // Fill kernel matrix with all 1s
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            kernel[i][j] = 1;
        }
    }

    // Print input matrix
    printf("Input Matrix (8x8):\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%3d ", input[i][j]);
        }
        printf("\n");
    }

    // Print kernel matrix
    printf("\nKernel Matrix (8x8):\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%3d ", kernel[i][j]);
        }
        printf("\n");
    }

    // Perform convolution (dot product) with step-by-step printing
    printf("\nStep-by-step Convolution Calculation:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            int product = input[i][j] * kernel[i][j];
            result += product;
            printf("input[%d][%d] * kernel[%d][%d] = %3d * %3d = %4d | Running Total: %4d\n",
                   i, j, i, j, input[i][j], kernel[i][j], product, result);
        }
    }

    // Final result
    printf("\nFinal Convolution Result (Sum of All Products): %d\n", result);

    return 0;
}
