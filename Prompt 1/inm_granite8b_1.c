#include <stdio.h> 
#include <math.h>

int main(){ float pi_value = 0.0; int i, j; for (i = 0, j = 0; i < 10000; i++, j++){ pi_value += pow(-1, j) / (2 * j + 1); } printf("The value of pi to 6 decimal places is: %f\n", pi_value); printf("The percentage error from the actual pi value is: %f%%\n", fabs((pi_value - 3.141592) * 100) / 3.141592);

return 0;

}