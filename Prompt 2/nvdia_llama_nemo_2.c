#include <stdio.h>

// Constants
#define FARADAY_CONSTANT 96485.3329  // C/mol (in Coulombs per mole)
#define ELEMENTARY_CHARGE 1.602176634e-19  // C (in Coulombs)

// Function to calculate Avogadro's Constant
double calculate_avogadro_constant(double faraday_constant, double elementary_charge) {
    return faraday_constant / elementary_charge;
}

int main() {
    double calculated_na;
    double actual_na = 6.02214076e23;  // Actual Avogadro's Constant for comparison
    double percentage_error;

    // Calculate Avogadro's Constant
    calculated_na = calculate_avogadro_constant(FARADAY_CONSTANT, ELEMENTARY_CHARGE);

    // Calculate Percentage Error
    percentage_error = ((calculated_na - actual_na) / actual_na) * 100;

    // Display Results
    printf("Avogadro's Constant Calculation:\n");
    printf("-------------------------------\n");
    printf("Actual Value:        %.8e mol^-1\n", actual_na);
    printf("Calculated Value:    %.8e mol^-1\n", calculated_na);
    printf("Percentage Error:    %.4f%%\n",(percentage_error)); // Using fabs for absolute error

    return 0;
}
