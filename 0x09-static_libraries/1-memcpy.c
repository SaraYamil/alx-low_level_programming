#include "main.h"
/**
 *_memcpy - function that copies memory area
 *@dest: memory where is stored
 *@src: kkkkkkkkkkkkkkkkkkkkkkkk
 *@n: cchcncjknc hhhhhhhhhhhhhhhhhucin
 *Return: maso9akch a zin wlah alx diri mzyan
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;


	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
