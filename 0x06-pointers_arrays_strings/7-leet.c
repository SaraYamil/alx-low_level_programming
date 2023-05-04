#include "main.h"
/**
*leet - kandlo harf b ra9m bhalo
*@n: variable
*Return: maso9akch
*/
char *leet(char *n)
{
int i;

for (i = 0; n[i] != '\0'; i++)
	{
	switch (n[i])
	{
	case 'a':
	case 'A':
	n[i] = '4';
	break;
	case 'e':
	case 'E':
	n[i] = '3';
	break;
	case 'o':
	case 'O':
	n[i] = '0';
	break;
	case 't':
	case 'T':
	n[i] = '7';
	break;
	case 'l':
	case 'L':
	n[i] = '1';
	break;
	default:
	break;
	}
	}
return (n);
}
