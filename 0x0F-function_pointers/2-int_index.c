#include "function_pointers.h"
/**
 * int_index - insex in ila kan true ila makanch ayraja3 -1 w safe
 * @array: arrayyyy
 * @size: size ta3 les element array
 * @cmp: pointe hhhhhhhhhhhh hhhhhhh hhhhh hhhhhh
 * Return: maso9akh
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
