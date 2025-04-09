#include <stdio.h>
#include <math.h>

int main() {
    int terms = 10000000;  // More terms = better accuracy
    double pi = 0.0;
    int sign = 1;

    for (int i = 0; i < terms; i++) {
        double term = 4.0 / (2 * i + 1);
        pi += sign * term;
        sign *= -1;
    }

    double actual_pi = 3.141593;
    double error = fabs((pi - actual_pi) / actual_pi) * 100;

    printf("Calculated pi: %.6f\n", pi);
    printf("Actual pi:     %.6f\n", actual_pi);
    printf("Percent error: %.6f%%\n", error);

    return 0;
}
