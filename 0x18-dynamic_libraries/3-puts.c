#include "main.h"

/**
 *  _puts - katprnty  string
 * @str: stringy
 * Return: had string chahel twil
 */

void	_puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
