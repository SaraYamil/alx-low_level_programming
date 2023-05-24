#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - printy smya  ta3 pointer fonction
 * @name: string ta3 barh
 * @f: pointer li mas9kech fih
 * Return: MAso9akch
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
