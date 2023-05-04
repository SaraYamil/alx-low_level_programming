#include "main.h"

/**
*string_toupper - change all lowercase to uppercase
*@n: pointer
*Return: n
*/
char *string_toupper(char *n)
{
int i = 0;

while (*n)
	{
	if (*n >= 'a' && *n <= 'z')
	*n = *n - 32;
	n++;
	}
return (n - i);
}
