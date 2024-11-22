# Files:
## trap.c
This program file helps in finding the values of tan(x) where x is in radians in the range [0,60] every five degrees.

### Steps:
1. Use loop counter to generate the degree angles.
2. Use function to generate the radian values.
3. Compute tan(x), store in the array.
4. Create a function/subroutine that calculates the area under the curve of tan(x)from 0→60 degrees using the Trapezoidal Rule.
5. Compile with “-lm” . This will ensure the tan function is available.

# Compilation and Execution:
$gcc -o trap trap.c -lm <br>
./trap