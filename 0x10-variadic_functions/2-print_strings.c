#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings by sara yamil se
 * @separator: string numero ta3 pointer a alx
 * @n: numero ta3 string lhad function
 * @...: variable numero ta3 numero of pointer
 *
 * Description: hhhh hhhhhh hhhhhhhhhh hhhhhh hhhhh hhh
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list sara;
	char *str;
	unsigned int index;

	va_start(sara, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(sara, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(sara);
}
