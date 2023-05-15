#include "main.h"
#include <stdlib.h>
/**
 * create_array - just arry about size of  char c hhhhhh
 * @size: size ta3 arry
 * @c: char variable
 * Description: create array  size of char c hhhhhhhh
 * Return: maso9akch ach atraj3
 *
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}

