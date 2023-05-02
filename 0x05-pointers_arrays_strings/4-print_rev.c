#include "main.h"
/**
 * print_rev - katpranty dakchi b3kos
 * @s: stringy
 * return: 0 hya katrja3
 */
void print_rev(char *s)
{
	int longi = 0;
	int o;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (o = longi; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
