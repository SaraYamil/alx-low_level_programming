#include "main.h"
/**
 * print_binary - Prints binary fonction to this projct
 * @n: inpute ta3had fonction²
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
