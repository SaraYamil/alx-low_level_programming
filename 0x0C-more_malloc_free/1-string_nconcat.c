#include "main.h"
/**
 * string_nconcat - fonction kanaktbo fiha arry ta3 cahr HHHHHHHHHH
 *  and initializes it with a specific char
 * hadchi li kan hana a  betty tal3at lya bli telling commant
 * @s1: inpute bite f  had  memorie
 * @s2: inpute bite f  had  memorie
 * @n: inpute bite f  had  memorie
 * Return: maso9akch a sidi ndir li bghit
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int z;
	char *cp;
	unsigned int size1 = 0;
	unsigned int size2 = 0;

	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL)
		s1 = "";
	while (s1[size1])
	{
		size1++;
	}
	while (s2[size2])
	{
		size2++;
	}
	if (size2 > n)
		size2 = n;
	copy = malloc(size1 + size2 + 1);
	if (!cp)
	{
		return (NULL);
	}
	for (z = 0; i < size1 + size2; z++)
	{
		if (z < size1)
		{
			cp[z] = s1[z];
		}
		else
		{
			cp[z] = s2[z - size1];
		}
	}
	cp[z] = '\0';
	return (cp);
}
