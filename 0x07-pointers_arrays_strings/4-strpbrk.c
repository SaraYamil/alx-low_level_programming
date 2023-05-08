#include "main.h"
/**
 * _strpbrk - fonction w safe
 * @s: variable pointer
 * @accept: hta howa
 * Return: maso9akch a kimba
 */
char *_strpbrk(char *s, char *accept)
{
		int sara;

		while (*s)
		{
			for (sara = 0; accept[sara]; sara++)
			{
			if (*s == accept[sara])
			return (s);
			}
		s++;
		}

	return ('\0');
}

