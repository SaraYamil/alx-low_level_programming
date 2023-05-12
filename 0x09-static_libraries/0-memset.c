#include "main.h"

/**
 * _memset - hhhhhhhhhhhhhhhhhhhhhh
 * @n: ggggggggggggggggggggg @s
 * @s: zzzzzzzzzzzzzzzzzzzzzzzzzzz @b
 * @b: eeeeeeeeeeeeeeeeeeeeeee*
 * Return: maso9akch
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
	s[i] = b;
	i++;
	}

	return (s);
}

