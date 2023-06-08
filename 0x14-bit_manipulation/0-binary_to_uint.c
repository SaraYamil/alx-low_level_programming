#include "main.h"
/**
 * binary_to_uint - binary t uint
 * @b: inpute char
 * Return: masok9akch
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int cnv = 0;
int x = 1, i = 0;

if (b == NULL)
return (0);
while (b[i + 1])
{
if (b[i] != '0' && b[i] != '1')
return (0);
i++;
}
while (i >= 0)
{
cnv += ((b[i] - '0') * x);
x *= 2;
i--;
}

return (cnv);
}
