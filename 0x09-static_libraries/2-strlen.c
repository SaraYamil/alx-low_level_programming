#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int sara = 0;


	while (*s != '\0')
	{
		sara++;
		s++;
	}


	return (sara);
}

