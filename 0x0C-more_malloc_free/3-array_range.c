#include <stdlib.h>
#include "main.h"

/**
 * *array_range - hhhhhhhhhhhhhhh hhhhhhhhhhhhh hhhhhhhhh
 * @min: min values stard dyyal elemnt
 * @max: max rang ta3 les elements w kastrired l values
 *
 * Return: maso9akch tani baz chahel fikom
 */
int *array_range(int min, int max)
{
	int *sara;
	int z, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	sara = malloc(sizeof(int) * size);

	if (sara == NULL)
		return (NULL);

	for (z = 0; min <= max; z++)
		sara[z] = min++;

	return (sara);
}
