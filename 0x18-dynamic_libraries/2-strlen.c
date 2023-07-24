#include "main.h"
/**
 * _strlen - katraj3 the tol dyal  string
 * @s: string
 * Return: tolta3kelma
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}
