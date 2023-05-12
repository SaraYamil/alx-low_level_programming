#include "main.h"
/**
 * _strpbrk - Fonction pinter
 * @s: variable
 * @accept: varible
 * Return: maso9akch a sidi
 */
char *_strpbrk(char *s, char *accept)
{
	int z;


	while (*s)
	{
		for (z = 0; accept[z]; z++)
		{
		if (*s == accept[z])
		return (s);
		}
	s++;
	}


return ('\0');
}
