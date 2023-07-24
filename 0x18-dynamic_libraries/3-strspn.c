#include "main.h"

/**
* _strspn - had function kathssb lnugh dyal strin
* @s: bdaya
* @accept: variable pointer
* Return: maso9akch
*/

unsigned int _strspn(char *s, char *accept)
{
	int a = 0, b, c;

	for (b = 0; s[b] != '\0'; b++)
	{
		if (s[b] != 32)
		{
			for (c = 0; accept[c] != '\0'; c++)
			{
				if (s[b] == accept[c])
					a++;
			}
		}
		else
			return (a);
	}
	return (a);
}
