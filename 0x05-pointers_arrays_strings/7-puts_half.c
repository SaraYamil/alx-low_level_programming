#include "main.h"
/**

puts_half - prints half of a string

@str: char to check

Return: 0 is success
*/
void puts_half(char *str)
{
	int string = 0, n, i;

	while (str[string] != '\0')
		string++;
	if (string % 2 == 0)
		n = string / 2;
	else
	n = (string + 1) / 2;

	for (i = n; i < string; i++)
	_putchar(str[i]);
	_putchar('\n');
}
