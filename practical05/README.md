# Files:
## arctan.c
This program file helps in finding the Inverse Hyperbolic Tangent function in two ways:

1. Using Maclaurin Series.
2. Using natural logaritms.

### Steps:
1. Get user input for delta - a real positive number.
2. Implement a function arctanh1(x)as an approximation to  Maclaurin series. As the seriesis infinite, we will set the function to stop when the element in the series is smaller than agiven precision,delta.
3. Implement function arctanh2(x)using approximations to natural logarithms. Natural logarithms are already implemented in math libraries.
4. Write a main that will calculate arctanh(x) where x∈[−0.9,0.9] and sampled every 0.01,using both methods. Store the results for both methods in separate array.
5. Compare the accuracy of each method with each other (to 10 significant figures).

## fib.c
This program file helps in finding the fibonacci series using pointers.

### Steps:
1. Take user input for the number of fibonacci elements to print.
2. Create a function to calculate fibonacci elements.
3. Apply loop to call this function upto n times.
4. Print fibonacci series.