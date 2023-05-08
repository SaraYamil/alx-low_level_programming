#include "main.h"
/**
*_memcpy - c katcopy misaha
*@dest: vriable lwal 
*@src: mimor li ancopyh
*@n: 3dad abyat
*Return: maso9kch
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
  unsigned int i;

  for (i = 0; i < n; i++)
    dest[i] = src[i];
  return (dest);
}
