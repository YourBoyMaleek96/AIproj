#include <stdio.h>
#include <math.h>

#define DIGITS 6
#define TOLERANCE 0.000001

double calculate_pi(int iterations) {
    double pi = 0.0;
    double term = 1.0;
    int sign = 1;

    for (int i = 0; i < iterations; i++) {
        pi += term;
        term *= -4.0 / (2 * i + 1);
        sign *= -1;
    }

    return pi * 4.0;
}

int main() {
    double actual_pi = 3.141592;
    double calculated_pi = calculate_pi(pow(10, DIGITS - 1) * 10); // Adjust iterations for desired precision

    printf("Calculated pi: %.*f\n", DIGITS, calculated_pi);
    printf("Actual pi: %.*f\n", DIGITS, actual_pi);

    double error = fabs(calculated_pi - actual_pi) / actual_pi * 100;
    printf("Percentage error: %.*f%%\n", DIGITS, error);

    return 0;
}
