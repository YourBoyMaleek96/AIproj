#include <stdio.h>

int main() {
    // Define the Avogadro constant
    double Avogadro = 6.02214129e23;

    // Get the input value for the number of atoms
    double n;
    printf("Enter the number of atoms: ");
    scanf("%lf", &n);

    // Calculate the value of Avogadro constant
    double AvogadroValue = n * Avogadro;

    // Calculate the percentage error
    double percentageError = (AvogadroValue - Avogadro) / Avogadro * 100;

    // Print the results
    printf("The value of Avogadro constant is: %.10f\n", AvogadroValue);
    printf("The percentage error is: %.2f%%\n", percentageError);

    return 0;
}
