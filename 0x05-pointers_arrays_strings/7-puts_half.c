#include "main.h"
/**
 * puts_half - fonctin kt3tina ness kelma 
 * knhssbo chahel fiha kn9semo hram 3a joj
 * @str: hhhhhh
 * Return: wach chgolkom
 */
void puts_half(char *str)
{
	int a, n, longi;

	longi = 0;

	for (a = 0; str[a] != '\0'; a++)
		longi++;

	n = (longi / 2);

	if ((longi % 2) == 1)
		n = ((longi + 1) / 2);

	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);
		_putchar('\n');
}
