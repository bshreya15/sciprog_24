#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/* Function declaration */
int factorial(int x);

int main(void){
    /* Variable declaration */
    int order;
    double e, *terms;

    /* User input */
    printf("Please enter the order you wish to use\n");
    scanf("%d", &order);

    /* Compute size and type*/
    terms = (double *)malloc(order*sizeof(double));

    /* Loop to calculate and store ith term */
    for (int i = 0; i < order; i++)
    {
        /* Function call */
        terms[i] = 1.0 / (double)factorial(i+1);
    }
    
    e = 1.0;

    /* Calculate e */
    for (int i = 0; i < order; i++)
    {
        e = e + terms[i];
    }
    free(terms);

    printf("e is estimated as %.10lf, with difference %e\n", e, e - exp(1.0));
    return 0;
}

/* Function definition */
int factorial(int x){
    if(x<0){
        printf("You must enter a positive number \n");
        return(-1);
    }
    else if(x==0){
        return 1;
    }
    else{
        return (x * factorial(x-1));
    }
}