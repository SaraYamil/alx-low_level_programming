#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Print numero had function by sara yamil
 * @separator: string ta3 pointer hhhhh hhhhh hhhhh
 * @n: numero ta3 int f had function print numbers
 * @...: variable numero ta3 numero of pointer
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int id;

	va_start(num, n);

	for (id = 0; id < n; id++)
	{
		printf("%d", va_arg(num, int));

		if (id != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(num);
}
