#include "main.h"
/**
 * _memset - ficher memory with a constant byte.
 * @s: first bytes of the memory
 * @b: constant byte b
 * @n:  bytes of the memory area pointed to by s
 * Return: pointer to the resulting string dests
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;


	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
