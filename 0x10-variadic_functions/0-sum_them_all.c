#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum hhhhh hhhh hhhh hhh hhh hhhh hhhh hhh
 * @n: numero ta3 poinetr a zin hhhhhhhhhhhh hhhhhh
 * @...: A variable number of hhhhhhhhhh hhhhhhhhhh hhhhhhhh hhhhh
 *
 * Return: maso9ich a alx a zin
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list sara;
	unsigned int i, sum = 0;

	va_start(sara, n);

	for (i = 0; i < n; i++)
		sum += va_arg(sara, int);

	va_end(sara);

	return (sum);
}
