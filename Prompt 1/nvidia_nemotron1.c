#include <stdio.h>
#include <math.h>

#define NUM_TERMS 1000000 // Sufficient for 6 digits of Pi
#define ACTUAL_PI 3.141593 // Actual Pi to 6 digits for comparison

int main() {
    double calculatedPi = 0.0;
    int sign = 1; // Alternates between 1 and -1 for series

    // Calculate Pi using the Gregory-Leibniz series
    for (int i = 0; i < NUM_TERMS; i++) {
        calculatedPi += sign / (2 * i + 1);
        sign *= -1; // Flip sign for next term
    }
    calculatedPi *= 4; // Multiply by 4 as per the series formula

    // Calculate percentage error
    double error = fabs((calculatedPi - ACTUAL_PI) / ACTUAL_PI) * 100;

    printf("Calculated Pi to 6 digits: %.6f\n", calculatedPi);
    printf("Actual Pi to 6 digits: %.6f\n", ACTUAL_PI);
    printf("Percentage Error: %.6f%%\n", error);

    return 0;
}
