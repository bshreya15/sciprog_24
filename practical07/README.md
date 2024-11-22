# Files:
## e.c
This program file helps to estimate the value of e by setting x=1. 

### Steps:
1. The user inputs the order of the polynomial needed, dynamically allocate an array of type double which stores the theterm for each power of x separately. 
2. Compare the estimate against the true value. 
3. Evaluate the estimates from 1st order to 15th order polynomials. 
4. Something strange happens with the higherorder polynomials the estimate gets worse, why is that?f(x) =1+x+x22!+x33!+x44!+···For example,eapproximately equals to 2.71828 whilef(1) =2,f(2) =2.5,f(3) =2.6666 andso on.

## pointer.c
This program file helps in implementing Basic C Pointers and dynamic memory allocation

### Steps:
1. Write a function allocatearray() that takes an integer as an argument and returns a pointer to an allocated memory block of that many integers.
2. Write a function fillwithones() that takes a pointer to an array of integers and fills every cell of the array with a one.
3. Write a function printarray() that takes a pointer to an array of integers and prints its elements on screen.
4. Write a function to free the allocated memory.
5. Call all these functions into a main block. Run with different array size
