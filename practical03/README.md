# Files:
## area.c
This program file helps in finding the integral of 
f(x) = tan(x)from 0→π/3. 

Then compare with the actual result: 
$$ \int_0^{\frac{\pi}{3}} tan(x) , dx = log(2)$$

### Steps:
1. Take a=0 and b=π/3.
2. Using tan from <math.h>, get the firt part of the sum tan(0) +tan(π/3).
3. Create a loop that generates 11 equidistant points between 0→π/3. Thus N=12 and x0=a=0 and x12=b=π/3.
4. Change the loop so that you are adding 2tan(xi)for the each of the 11 points.
5. Add that sum to that of the end points and multiply by (b−a)/2N.
6. Compare this against log(2) you should not be too far out.
7. Compile with “-lm” . This will ensure the tan function is available.