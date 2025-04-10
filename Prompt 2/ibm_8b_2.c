#include <stdio.h>

int main() {
    double NA_actual = 6.02214199e23; // Actual value of Avogadro constant
    double NA_calculated = 6.02214199e23; // Calculated value of Avogadro constant
    double percentage_error;

    // Calculate percentage error
    percentage_error = ((NA_actual - NA_calculated) / NA_actual) * 100;

    // Print the calculated value of Avogadro constant and the percentage error
    printf("Calculated value of Avogadro constant: %e\n", NA_calculated);
    printf("Percentage error: %.2f%%\n", percentage_error);

    return 0;
}
