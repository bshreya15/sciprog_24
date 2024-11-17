/*
* Iterative and recursiv versions of Euclid's algorithm
* to calculate the gcd of two positive integers
*/

#include<stdio.h>

int itr(int a, int b){
    int temp;
    while (b!=0){
        temp = b;
        b = a%b;
        a = temp;
    }
    return a;
}

int rec(int a, int b){
    if(b == 0){
        return a;
    }else{
        return rec(b, a%b);
    }
}

int main(){
    int a,b,err;
    printf("Please enter two positive integers:\n");
    err = scanf("%d %d", &a, &b);
    if(err != 2){
        printf("Please enter two integers.\n");
        return 1;
    }

    if(a<=0 || b<=0){
        printf("Please enter positive integers.\n");
        return 1;
    }

    printf("IterativeGCD(%d, %d) = %d\n", a, b, itr(a,b));
    printf("RecursiveGCD(%d, %d) = %d\n", a, b, rec(a,b));


    return 0;
}