#include "main.h"
/**
*_memcpy - man3erf
*@dest: pointer value
*@src: awdi ana soqi
*@n: nmuero byte
*Return: maso9akch
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;


for (i = 0; i < n; i++)
{
  *(dest + i) = *(src + i);
}
return (dest);
}
