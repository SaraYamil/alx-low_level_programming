#include "main.h"
#include <stdlib.h>
/**
 * argstostr - sssss rrrrrr
 * @ac: int variable
 * @av: double pointer tableux
 * Return: maso9akch
 */
char *argstostr(int ac, char **av)
{
	int i, n, r = 0, l = 0;
	char *sara;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			l++;
	}
	l += ac;

	sara = malloc(sizeof(char) * l + 1);
	if (sara == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (n = 0; av[i][n]; n++)
	{
		sara[r] = av[i][n];
		r++;
	}
	if (sara[r] == '\0')
	{
		sara[r++] = '\n';
	}
	}
	return (sara);
}
