#include <stdio.h>
#include <math.h>

// Function to calculate Pi using the BBP formula
double calculate_pi(int iterations) {
    double pi = 0.0;
    for (int k = 0; k < iterations; k++) {
        pi += (1 / pow(16, k)) * (
            4.0 / (8 * k + 1) -
            2.0 / (8 * k + 4) -
            1.0 / (8 * k + 5) -
            1.0 / (8 * k + 6)
        );
    }
    return pi;
}

int main() {
    // Number of iterations for the BBP formula
    int iterations = 100;

    // Calculate Pi
    double calculated_pi = calculate_pi(iterations);

    // Actual Pi value to 6 digits
    double actual_pi = 3.141593;

    // Calculate percentage error
    double percentage_error = ((actual_pi - calculated_pi) / actual_pi) * 100;

    // Print results
    printf("Calculated Pi: %.6f\n", calculated_pi);
    printf("Actual Pi: %.6f\n", actual_pi);
    printf("Percentage Error: %.6f%%\n", fabs(percentage_error));

    return 0;
}
