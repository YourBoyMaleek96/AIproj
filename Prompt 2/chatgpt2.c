#include <stdio.h>
#include <math.h>

int main() {
    // Actual value of Avogadro's constant
    double actual_NA = 6.02214076e23;

    // Estimate using Ideal Gas Law: PV = nRT → N = (P * NA * V) / (RT)
    // Therefore, NA = (P * V) / (R * T) * (N / n), and for 1 mole: NA = (P * V) / (R * T)
    // At STP: P = 101325 Pa, V = 0.022414 m^3 (22.414 L), R = 8.314 J/(mol·K), T = 273.15 K
    double P = 101325;         // Pressure in Pascals
    double V = 0.022414;       // Molar volume in m^3
    double R = 8.314;          // Ideal gas constant in J/(mol·K)
    double T = 273.15;         // Temperature in Kelvin

    double estimated_NA = (P * V) / (R * T);

    // The estimated value is per mole, so scale by 1e23 to match the format
    estimated_NA *= 1e23;

    // Calculate percentage error
    double percentage_error = fabs((actual_NA - estimated_NA) / actual_NA) * 100;

    // Display results
    printf("Estimated Avogadro's Constant: %.6e mol^-1\n", estimated_NA);
    printf("Actual Avogadro's Constant:    %.6e mol^-1\n", actual_NA);
    printf("Percentage Error:              %.6f%%\n", percentage_error);

    return 0;
}
