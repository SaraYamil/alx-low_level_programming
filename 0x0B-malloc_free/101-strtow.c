#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int flag, c, w;

	flag = 0;
	w = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
	}

	return (w);
}
/**
 * **strtow - tanfr9o stringat l klimat w safe
 * @str: string li kanfr9o
 *
 * Return: nari rah 3yte ngol likom maso9akomch ana li 3rfa
 */
char **strtow(char *str)
{
	char **sara, *yamil;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	sara = (char **) malloc(sizeof(char *) * (words + 1));
	if (sara == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				yamil = (char *) malloc(sizeof(char) * (c + 1));
				if (yamil == NULL)
					return (NULL);
				while (start < end)
					*yamil++ = str[start++];
				*yamil = '\0';
				sara[k] = yamil - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	sara[k] = NULL;

	return (sara);
}
