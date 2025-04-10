#include <stdio.h>
#include <math.h>

// Define constants
#define FARADAY_CONSTANT 96485.3329  // C/mol
#define ELEMENTARY_CHARGE 1.60217662e-19  // C

int main() {
    // Calculate Avogadro's constant
    double avogadro_constant = FARADAY_CONSTANT / ELEMENTARY_CHARGE;

    // Print the calculated value
    printf("Calculated Avogadro's constant: %.10e\n", avogadro_constant);

    // Define the actual value of Avogadro's constant
    double actual_avogadro_constant = 6.02214076e23;

    // Calculate the percentage error
    double percentage_error = ((avogadro_constant - actual_avogadro_constant) / actual_avogadro_constant) * 100;

    // Print the percentage error
    printf("Percentage error: %.10f%%\n", percentage_error);

    return 0;
}
