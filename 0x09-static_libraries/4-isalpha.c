#include "main.h"

/**
 * _isalpha - fonctiondyal lah
 * @c: wa nari rah a parameter c
 * Description: wili wili wili
 * section header: section header
 * Return: Maso9komch awli hadchi dkhol saha
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <=  90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
