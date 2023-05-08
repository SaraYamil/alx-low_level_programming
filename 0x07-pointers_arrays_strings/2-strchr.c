#include "main.h"
/**
 * _strchr - pointer
 * @s: variable
 * @c: hta howa
 * Return: maso9akch
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}

