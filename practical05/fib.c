#include<stdio.h>
#include<stdlib.h>

int main(void){

    /* Function declaration */
    void fib(int* a, int* b);

    /* Variable declaration */
    int n;

    /* User input */
    printf("Please enter a positive integer n\n");
    scanf("%d",&n);

    /* User input condition check */
    if(n < 1){
        printf("n must be bigger than 1 \n");
        exit(1); 
    }

    /* Declare first two elements of fibonacci series */
    int f0 = 0;
    int f1 = 1;

    printf("The fibonacci series is : \n");
    printf("%d %d ",f0 ,f1);

    int i;

    /* loop to display n elements of fibonacci series */
    for(i = 2 ; i <= n ; i++){
        /* Function call */
        fib(&f1 , &f0);
        printf("%d ", f1);
        if ((i+1) % 10 == 0)
        {
            printf("\n");
        }
        
    }

    return 0;
}

/* Function definition */
void fib(int *a, int *b){
    int next;
    next = *a + *b;

    *b = *a;
    *a = next;
}