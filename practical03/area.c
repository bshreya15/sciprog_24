#include <stdio.h>
#include <math.h>

int main() {
    // Declare variables
    double a = 0.0;                // lower limit (0)
    double b = M_PI / 3.0;         // upper limit (π/3)
    int N = 12;                    // Number of points (including a and b)
    double h = (b - a) / (N - 1);  // Step size (equidistant points)

    
    float sum = tan(a) + tan(b);  // f(x0) = tan(0), f(xN) = tan(π/3)

    // Loop over the intermediate points (from x1 to xN-1)
    int i;
    for ( i = 0; i < 60; i = i + 5)
    {
        sum += 2 * tan(i * M_PI / 180);
    }
    
    // Multiply the sum by (b - a) / (2*(N-1))
    sum = ((b-a)/(2 * N)) * sum;

    // Output the computed result and the actual result
    printf("Computed integral using the trapezoidal rule: %lf\n", sum);
    printf("Actual result (log(2)): %lf\n", logf(2));
    printf("Absolute Difference: %lf\n", fabs(sum - logf(2)));
    printf("Relative Difference: %lf\n", fabs(1-(sum/logf(2))));

    return 0;
}
