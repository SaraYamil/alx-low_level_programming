#include "main.h"
/**
 * _strncat - fonction maso9akch ach kadir
 * @dest: valeur li kikharj
 * @src: valeur li kikharj
 * @n: valeur li kikharj
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';
	return (dest);
}
