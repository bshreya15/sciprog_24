#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/* Function definations */
double arctanh1(double x, double delta);
double arctanh2(double x);

int main(void){

    /* Variable declaration */
    double delta;

    /* User input */
    printf("Please enter a positive real number delta : \n");
    scanf("%lf", &delta);

    /* Check user input */
    if( delta < 0){
        printf("Exiting code as delta is negative \n");
        exit(1);
    }

    /* Declare variables */
    double x = -0.9;
    int length = 1000;
    double tan1[length];
    double tan2[length];
    int i = 0;

    /* Compute arctan of x using two defined functions and find difference bw them*/
    while (x <= 0.9 && i < length){
        /* Function calls */
        tan1[i] = arctanh1(x,delta);
        tan2[i] = arctanh2(x);

        printf("The diff at x = %lf is %.10lf \n", x, fabs((tan1[i] - tan2[i])) / tan2[i]);
        i++;
        x += 0.01;
    }
    

    return 0;
}

/* Function definitions */
double arctanh1(double x, double delta){
    double sum = 0, elem, val;
    int n = 0;

    /* Compute arctan of x through iterative approach */
    do{
        val = 2 * n + 1;
        elem = pow(x, val) / val;
        sum += elem;
        n++;
    } while(fabs(elem) >= delta);
}

double arctanh2(double x){
    /* Compute arctan of x using log */
    return (log(1+x) - log(1-x)) / 2 ;
}