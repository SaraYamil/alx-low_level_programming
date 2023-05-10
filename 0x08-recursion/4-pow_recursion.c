#include "main.h"

/**
 * _pow_recursion - ficher li fih memory b bite
 * @x: awal mimor
 * @y: hta hadi
 * Return: - maso9akch
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x *  _pow_recursion(x, y - 1));
}
