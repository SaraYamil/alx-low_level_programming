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
    char *temp_dest = dest;
    char *temp_src = src;   

    while (n--)
    {
        *temp_dest++ = *temp_src++;
    }

    return dest;
}
