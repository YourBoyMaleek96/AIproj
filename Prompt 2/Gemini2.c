#include <stdio.h>
#include <math.h>

int main() {
  // Define the values used in the calculation (example values - these are NOT the actual method to determine Avogadro's number)
  // These values are chosen arbitrarily for demonstration purposes only.
  double molar_mass_copper = 63.55; // g/mol (approximate molar mass of copper)
  double density_copper = 8.96;    // g/cm^3 (approximate density of copper)
  double volume_per_atom_estimate = 1.18e-23; // cm^3/atom (a hypothetical estimated volume per atom)

  // Calculate Avogadro's number based on these hypothetical values
  double avogadro_calculated = molar_mass_copper / (density_copper * volume_per_atom_estimate);

  // Define the actual value of Avogadro's constant
  double avogadro_actual = 6.02214076e23; // mol^-1

  // Calculate the absolute error
  double absolute_error = fabs(avogadro_calculated - avogadro_actual);

  // Calculate the percentage error
  double percentage_error = (absolute_error / avogadro_actual) * 100.0;

  printf("---------------------------------------------------\n");
  printf("Calculation of Avogadro's Constant (Demonstration)\n");
  printf("---------------------------------------------------\n");
  printf("Hypothetical Molar Mass of Copper: %.2f g/mol\n", molar_mass_copper);
  printf("Hypothetical Density of Copper: %.2f g/cm^3\n", density_copper);
  printf("Hypothetical Volume per Atom: %.2e cm^3/atom\n", volume_per_atom_estimate);
  printf("---------------------------------------------------\n");
  printf("Calculated Avogadro's Number: %.8e mol^-1\n", avogadro_calculated);
  printf("Actual Avogadro's Constant:   %.8e mol^-1\n", avogadro_actual);
  printf("---------------------------------------------------\n");
  printf("Absolute Error:              %.8e mol^-1\n", absolute_error);
  printf("Percentage Error:            %.4f%%\n", percentage_error);
  printf("---------------------------------------------------\n");

  return 0;
}