#include "main.h"
/**
 * _strlen_recursion - tol ta3 string
 * @s: string pointer
 *
 * 
 */
int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}

	return (longit);
}
