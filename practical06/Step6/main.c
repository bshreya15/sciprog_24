#include<stdio.h>
#include<math.h>
#include<stdlib.h>

// #define n 5
// #define p 3
// #define q 4

// Func declaration
void matmult(int n, int p, int q, double A[n][p], double B[p][q], double C[n][q]);

int main(){
    int n = 5, p = 3, q = 4;
    double A[n][p];
    double B[p][q];
    double C[n][q];

    // Adding elements in matrix A equal to i+j
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            A[i][j] = i+j;
        }
    }

    // Adding elements in matrix B equal to i-j
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            B[i][j] = i-j;
        }
    }

    // Function call to matrix multiplication
    matmult(n,p,q,A,B,C);

    printf("Matrix A \n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            printf("%1.0f ", A[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix B \n");
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            printf("%1.0f ", B[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix C \n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < q; j++) {
            printf("%1.0f ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}