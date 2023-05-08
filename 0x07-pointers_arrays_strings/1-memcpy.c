#include "main.h"
/**
 * _memcpy - fonction fchkel
 *
 * @dest: ach ghadi ncopiw
 * @src: a la hadi hya ancopiw ama lwala rah fin ancopiw
 * @n: 3dad bytes
 *
 * Return: maso9akch
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
  unsigned int i;

  for (i = 0; i < n; i++)
    dest[i] = src[i];
  return (dest);
}
