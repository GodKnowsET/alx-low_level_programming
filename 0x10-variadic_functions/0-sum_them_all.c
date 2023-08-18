#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - this function prints the sum of all the paramters.
 * @n: number of paramters passed on to the function.
 * @...:  number of variable paramters to calculate the sum.
 *
 * Return: If n == 0 - 0.
 *         Orelse - the sum of all the parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}

