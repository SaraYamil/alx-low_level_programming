#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocates memoir ta3 had malloc
 * @b: input argmnt f had void hhhhhhhh HA L3AR
 *
 * Return: maso9akch hadi avoid
 */
void *malloc_checked(unsigned int b)
{
	void *sara;

	sara = malloc(b);

	if (sara == NULL)
		exit(98);

	return (sara);
}
