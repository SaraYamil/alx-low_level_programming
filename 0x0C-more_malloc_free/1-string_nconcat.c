#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - fonction w safe ki concari bin stringat HHHHHHHH
 * @s1: striiiiiiiiiiiiiiin gggggg
 * @s2: ssssssssss aaa rrrrrrr aaaaaa
 * @n: cccccccccccccc oooooooooo dddddddddd e
 *
 * Return: maso9kach wlah hhhhhhhhh
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *sara;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		sara = malloc(sizeof(char) * (len1 + n + 1));
	else
		sara = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!sara)
		return (NULL);

	while (i < len1)
	{
		sara[i] = s1[i];
		i++;
	}

	while (n < len2 && i < (len1 + n))
		sara[i++] = s2[j++];

	while (n >= len2 && i < (len1 + len2))
		sara[i++] = s2[j++];

	sara[i] = '\0';

	return (sara);
}
