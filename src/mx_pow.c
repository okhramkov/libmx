#include "libmx.h"

double mx_pow(double n, unsigned int pow) {
	double pow_n = n;

	if(pow == 0 || n == 1)
	    return 1;
	for (unsigned int i = 0; i < (pow - 1); i++)
		n = (double)n * pow_n;
	return n;
}

// int main(void) {
// 	printf ("3^3 = %lf \n",  mx_pow(3, 3));
// 	printf ("2.5^3 = %lf \n",  mx_pow(2.5, 3));
// 	printf ("2^0 = %lf \n",  mx_pow(2, 0));
// 	printf ("0^2 = %lf \n",  mx_pow(0, 2));
// 	printf ("-4^3 = %lf \n", mx_pow(-4, 3));
// 	printf ("-4^4 = %lf \n", mx_pow(-4, 4));
// 	printf ("-1^0 = %lf \n", mx_pow(-1, 0));
// 	printf ("1^0 = %lf \n", mx_pow(1, 0));
// 	printf ("1^1 = %lf \n", mx_pow(1, 1));
// }
