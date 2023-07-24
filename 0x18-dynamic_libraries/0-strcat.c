#include "main.h"

/**
 * _strcat - wlah ma3erft had blan
 * @dest:variable lawl
 * @src:variable tani
 * Return: maso9kch
 */
char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}
