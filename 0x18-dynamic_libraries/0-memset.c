#include "main.h"
/**
*_memset - kan3mero memoir
*@s: vriable lwal
*@b: vriable tani
*@n: 3dad dyal bytes
*Return: machoglakch kima 3da
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
*(s + i) = b;
}
return (s);
}
