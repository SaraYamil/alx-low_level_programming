#include "main.h"
/**
 * _strcmp - mo9arna string values
 * @s1: input vatible
 * @s2: input varible
 *
 * Return: maso9akch
 */
int _strcmp(char *s1, char *s2)
{
	int i;


	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	i++;
	}
	return (0);
}
