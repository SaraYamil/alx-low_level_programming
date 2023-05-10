#include "main.h"

/**
 * _sqrt_recursion2 - ficher fih constant bite.
 * @n: variable
 * @sqrt: vriable
 * @res: hta ana the some blan
 * Return: - maso9akch
 */
float _sqrt_recursion2(int n, float sqrt, float res)
{
	if (sqrt == res)
	{
		if ((int)sqrt == sqrt)
		{
			return (sqrt);
		}
		else
		{
			return (-1);
		}
	}
	res = sqrt;
	sqrt = (n / res + res) / 2;
	return (_sqrt_recursion2(n, sqrt, res));
}

/**
 * _sqrt_recursion - nafss blan ta3 fo9anya
 * @n: vriable
 * Return: maso9kch
 */
int _sqrt_recursion(int n)
{
	float res, sqrt;

	sqrt = n / 2;
	res = 0;
	if (n == 1)
		return (1);
	if (n < 0)
		return (-1);
	return (_sqrt_recursion2(n, sqrt, res));
}
