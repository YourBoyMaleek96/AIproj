#include <stdio.h>
#include <math.h>

int main() {
    int max_terms = 1000000; // Number of terms to calculate
    double pi = 0.0;
    double term = 1.0;

    for (int i = 0; i < max_terms; i++) {
        pi += term;
        term *= -1.0 / (2 * i + 3);
    }

    pi *= 4;

    // Calculate the percentage error
    double actual_pi = M_PI;
    double error = fabs((pi - actual_pi) / actual_pi) * 100;

    printf("Calculated pi: %.6f\n", pi);
    printf("Actual pi: %.6f\n", actual_pi);
    printf("Percentage error: %.6f%%\n", error);

    return 0;
}
