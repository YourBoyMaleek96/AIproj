#include <stdio.h>

int main() {
    double calculated_N_A = 6.022e23; // Calculated value of Avogadro's constant
    double actual_N_A = 6.02214076e23; // Actual value of Avogadro's constant

    double error = (calculated_N_A - actual_N_A) / actual_N_A * 100;

    printf("Calculated Avogadro's constant: %.10le\n", calculated_N_A);
    printf("Actual Avogadro's constant: %.10le\n", actual_N_A);
    printf("Percentage error: %.10lf%%\n", error);

    return 0;
}
