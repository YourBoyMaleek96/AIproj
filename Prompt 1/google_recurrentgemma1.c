#include <stdio.h>
#include <math.h>

int main() {
    // Calculate the value of pi to 6 digits
    double pi = 0.0;
    int i;
    for (i = 0; i < 6; i++) {
        pi += 1.0 / (i + 1);
    }

    // Calculate the percentage error from the actual pi value
    double error = 100 * fabsl(pi - M_PI);
    printf("The value of pi to 6 digits is: %.6f\n", pi);
    printf("The percentage error from the actual pi value is: %.2f%%\n", error);

    return 0;
}
