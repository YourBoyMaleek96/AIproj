#include <stdio.h>
#include <math.h>

int main() {
    double pi_approx = 0.0;
    int term, sign = 1;

    // Calculate pi using Gregory-Leibniz series
    for (term = 0; term < 1000000; term++) {
        pi_approx += sign / (2.0 * term + 1.0);
        sign *= -1;
    }

    pi_approx *= 4; // Multiply by 4 to get pi

    // Actual value of pi to 6 digits
    double actual_pi = 3.141592;

    // Calculate percentage error
    double error = fabs(pi_approx - actual_pi) / actual_pi * 100;

    printf("Approximate value of pi: %.6f\n", pi_approx);
    printf("Actual value of pi: %.6f\n", actual_pi);
    printf("Percentage error: %.6f%%\n", error);

    return 0;
}
