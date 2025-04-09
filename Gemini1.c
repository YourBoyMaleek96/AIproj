#include <stdio.h>
#include <math.h>

int main() {
  // Using the Leibniz formula for pi (slow convergence, but simple)
  double pi_approx = 0.0;
  long long n;
  long long num_terms = 1000000; // Number of terms to use for approximation
  int sign = 1;

  for (n = 0; n < num_terms; n++) {
    pi_approx += sign * (1.0 / (2.0 * n + 1.0));
    sign *= -1;
  }
  pi_approx *= 4.0;

  // Actual value of pi to 6 decimal places
  double pi_actual = 3.141593;

  // Calculate the absolute error
  double absolute_error = fabs(pi_approx - pi_actual);

  // Calculate the percentage error
  double percentage_error = (absolute_error / pi_actual) * 100.0;

  printf("Approximated value of pi: %.6f\n", pi_approx);
  printf("Actual value of pi (6 digits): %.6f\n", pi_actual);
  printf("Absolute error: %.6f\n", absolute_error);
  printf("Percentage error: %.6f%%\n", percentage_error);

  return 0;
}