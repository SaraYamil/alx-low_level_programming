#include "main.h"

/**
 * flip_bits - hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh
 * @n: mmmmmmmmmm.
 * @m: hhhhhhhhhhhhhhhhhh.
 * Return: hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int y = n ^ m, bits = 0;

while (y > 0)
{
bits += (y & 1);
y >>= 1;
}

return (bits);
}
