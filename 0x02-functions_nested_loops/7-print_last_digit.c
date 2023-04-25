#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @i: input value of integer
 * Return: return last digit.
 */

int print_last_digit(int i)
{
	int a;

	if (i < 0)
	{
		i = -i;
	}
	a = i % 10;
	if (a < 0)
	{
		a = -a;
	}
	_putchar(a + '0');
	return (a);
}
