#include "main.h"

/**
 * get_endianness - fonction get endiannewss
 * Return: kimba 3chiri galb 6 9
 */
int get_endianness(void)
{
int z = 1;
char *r = (char *)&z;

if (*r == 1)
return (1);
return (0);
}
