#include<stdio.h>
#include<math.h>
#include<stdlib.h>

#define n 5
#define p 3
#define q 4

int main(void){

    double A[n][p];
    double B[p][q];
    double C[n][q] = {0};

    // Adding elements in matrix A equal to i+j
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            A[i][j] = ((i)+1)+((j)+1);
        }
    }

    // Adding elements in matrix B equal to i-j
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            B[i][j] = (i+1)-(j+1);
        }
    }

    // Adding elements in matrix C equal to AxB
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < q; j++) {
            for (int k = 0; k < q; k++) {
                C[i][j] += A[i][k] * B[k][j]; // Multiply and accumulate
            }
        }
    }

    printf("Matrix A \n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            printf("%.2f ", A[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix B \n");
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            printf("%.2f ", B[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix C \n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < q; j++) {
            printf("%.4f ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}