#include "main.h"

/**
 * set_bit - hhhhhhhhhhhhhhhhh a bit at a given index.
 * @n: A poihhhhhhhhhhhhhhhhhh.
 * @index: The index stahhhhhht h0.
 * Return: If an errohhhhhhhhh
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= (sizeof(unsigned long int) * 8))
return (-1);

*n ^= (1 << index);

return (1);
}
