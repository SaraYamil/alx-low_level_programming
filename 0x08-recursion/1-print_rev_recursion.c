#include "main.h"
/**
 * _print_rev_recursion - katprinty lina string mach9alb.
 * @s: vriable.
 * Return maso9akch
 * by sara
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
