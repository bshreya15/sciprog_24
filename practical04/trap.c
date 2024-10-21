#include <stdio.h>
#include <math.h>

int main() {
    // Declare variables
    int N = 12, i;
    float a = 0.0, b_deg = 60.0;         // upper limit (π/3)
    float b_rad = ( M_PI * b_deg)/180;

    printf("pi/3 Radians = %f\n", b_rad);

    float area = tan(a) + tan(b_rad);  // f(x0) = tan(0), f(xN) = tan(π/3)
    printf("Initial area (area at x(0) and x(12)) = %f\n", area);

    //Calculate the area at pts x1, x2, ....x11 and add them up
    for ( i = 5; i < 60; i = i + 5)
    {
        area += 2 * tan(i * M_PI / 180);
    }
    
    // Multiply the area by (pi/3) / (2*(12)) after converting it to radians
    float mult_rad = (M_PI((b_deg-a)/(2 * N)))/180.0;
    area = mult_rad * area;


    // Output the computed result and the actual result
    printf("Computed integral using the trapezoidal rule: %lf\n", area);
    printf("Actual result (log(2)): %lf\n", logf(2));
    printf("Absolute Difference: %lf\n", fabs(area - logf(2)));
    printf("Relative Difference: %lf\n", fabs(1-(area/logf(2))));

    return 0;
}
