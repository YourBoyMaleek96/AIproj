#include <stdio.h>

#define ACTUAL_AVOGADRO_CONSTANT 6.02214076e23

int main() {
    float calculated_avogadro_constant = 100 * 1000 / 196.966569;
    float percentage_error = 100 * (ACTUAL_AVOGADRO_CONSTANT - calculated_avogadro_constant) / ACTUAL_AVOGADRO_CONSTANT;

    printf("The calculated value of Avogadro constant is: %f\n", calculated_avogadro_constant);
    printf("The percentage error from the actual value is: %f%%\n", percentage_error);

    return 0;
}
