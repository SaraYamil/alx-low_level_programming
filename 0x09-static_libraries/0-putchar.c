#include <unistd.h>

/**
 * _putchar - fonction putchar fchkel hachakom
 * @c: char input
 *
 * Return: maso9ich
 * hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
