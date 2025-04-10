#include <stdio.h>
#include <math.h>

// Function to calculate Avogadro constant using a simple approximation
double calculate_avogadro_constant() {
    return 6.02214 * pow(10, 23);
}

// Function to calculate percentage error
double calculate_percentage_error(double actual_value, double calculated_value) {
    return (fabs(actual_value - calculated_value) / actual_value) * 100;
}

int main() {
    double actual_value = 6.02214076 * pow(10, 23);
    double calculated_value = calculate_avogadro_constant();
    double percentage_error = calculate_percentage_error(actual_value, calculated_value);

    printf("Calculated Avogadro constant: %.10f\n", calculated_value);
    printf("Actual Avogadro constant: %.10f\n", actual_value);
    printf("Percentage error: %.4f%%\n", percentage_error);

    return 0;
}
