#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - function kat3aty array w safi
 * code by me sara yamil hhhhhhhhhh
 * @array: array w safe maso9akch fiha
 * @size: size ta3 arrray
 * @action: pointer maso9akch fih aslan
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
