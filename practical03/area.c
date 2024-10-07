#include <stdio.h>
#include <math.h>

int main() {
    // Declare variables
    const M_PI = 3.14732;
    double a = 0.0;                // lower limit (0)
    double b = M_PI / 3.0;         // upper limit (π/3)
    int N = 12;                    // Number of points (including a and b)
    double h = (b - a) / (N - 1);  // Step size (equidistant points)
    double sum = 0.0;              // Accumulate the result of the trapezoidal sum
    double x_i;                     // x_i (the i-th point)
    int i;

    // First part: f(x0) + f(xN)
    sum = tan(a) + tan(b);  // f(x0) = tan(0), f(xN) = tan(π/3)

    // Loop over the intermediate points (from x1 to xN-1)
    for (i = 1; i < N - 1; i++) {
        x_i = a + i * h;           // Generate the equidistant point x_i
        sum += 2.0 * tan(x_i);      // Add 2*f(xi) for each intermediate point
    }

    // Multiply the sum by (b - a) / (2*(N-1))
    double integral = (b - a) * sum / (2.0 * (N - 1));

    // Actual result from the analytical integral
    double actual_result = log(2.0);

    // Output the computed result and the actual result
    printf("Computed integral using the trapezoidal rule: %lf\n", integral);
    printf("Actual result (log(2)): %lf\n", actual_result);
    printf("Difference: %lf\n", fabs(integral - actual_result));

    return 0;
}
