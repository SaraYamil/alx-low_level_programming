i#include "main.h"
/**
*_memcpy - c katcopy misaha
*@dest: vriable lwal 
*@src: mimor li ancopyh
*@n: 3dad abyat
*Return: maso9kch
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
    char *temp_dest = dest; // create a temporary pointer and set it to dest
    char *temp_src = src;   // create a temporary pointer and set it to src

    while (n--)
    {
        *temp_dest++ = *temp_src++; // copy the value of temp_src to temp_dest and increment both pointers
    }

    return dest;
}
