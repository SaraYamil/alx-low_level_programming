#include "main.h"
/**
 * _puts - fonction ta3 code
 * @str: inpute
 * Return: mshoglkch
 */
void _puts(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
