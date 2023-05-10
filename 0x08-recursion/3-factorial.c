#include "main.h"

/**
 * factorial - fonction 3adadya
 * @n: variable
 *
 * Return: maso9akch
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
