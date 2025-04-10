#include <stdio.h>

int main() {
    // Define constants
    double M = 18.01528e-3; // Molar mass of water in kg/mol
    double rho = 1000.0;   // Density of water in kg/m^3
    double actual_N_A = 6.02214076e23; // Actual value of Avogadro's constant in mol^-1

    // Calculate Avogadro's constant
    double calculated_N_A = 1.0 / (M * rho);

    // Calculate percentage error
    double percentage_error = ((actual_N_A - calculated_N_A) / actual_N_A) * 100.0;

    // Print results
    printf("Calculated Avogadro's constant: %.2e mol^-1\n", calculated_N_A);
    printf("Percentage error: %.2f%%\n", percentage_error);

    return 0;
}
