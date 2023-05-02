#include "main.h"
/**
 * _strcpy - pinter ta3 string andiroh f blassa akhra
 * @dest: variable to check
 * @src: variable
 * Return: machgolkomch a khoty
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
		dest[a] = src[a];
	dest[a] = '\0';
	return (dest);
}
