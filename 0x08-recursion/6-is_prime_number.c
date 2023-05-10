#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - wach int is prime wla la
 * @n: variable
 *
 * Return: maso9akch
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - fonction w safe
 * @n: variable
 * @i: int
 * Return:maso9kach
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
