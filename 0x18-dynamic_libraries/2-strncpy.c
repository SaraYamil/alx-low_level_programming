#include "main.h"

/**
 *_strncpy - fonction kancopy biha stingat
 *
 * @src: Tstringaty
 * @dest: variable li ikhod string
 * @n: tol ta3 strin
 *
 * Return: machgolkomch
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;

	for (i = 0; i < n && *(src + i); i++)
	{
		*(dest + i) = *(src + i);
	}
	for (; i < n; i++)
	{
	*(dest + i) = '\0';
	}
	return (dest);

}
