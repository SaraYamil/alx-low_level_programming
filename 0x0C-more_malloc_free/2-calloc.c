#include <stdlib.h>
#include "main.h"

/**
 * *_memset - hhhhhhhhhhhhh hhhhhhhhhhhh hhhhhhhhhhhh hhhhhhhhhh
 * @s: zzzzzz bbbbbbbbbb
 * @b: bbbbbbbbbbbb bbbbbbbbbb
 * @n: inpute mangolch likom ach kdir l b
 *
 * Return: maso9kch a hobi
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int z;

	for (z = 0; z < n; z++)
	{
		s[z] = b;
	}

	return (s);
}

/**
 * *_calloc - alloclate memmoire bach i3erf array
 * @nmemb: numero ta3 les elment  array
 * @size: taille ta3 les eleme nt
 *
 * Return: maso9akch a hobi
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *sara;

	if (nmemb == 0 || size == 0)
		return (NULL);

	sara = malloc(size * nmemb);

	if (sara == NULL)
		return (NULL);

	_memset(sara, 0, nmemb * size);

	return (sara);
}

