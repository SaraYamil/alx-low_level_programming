#include "main.h"
/**
*_puts_recursion - function like puts();
*@s: variable
*Return: maso9akch
*/
void _puts_recursion(char *s)
{
int i = 0;
	while (s[i] != '\0') 
	{
		_putchar(s[i]); 
			i++; 
	}
	_putchar('\n')
}
