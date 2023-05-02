#include "main.h"

/**
 * swap_int - nbdlo had value dyal int a bi int b
 * Owned by sun/moon
 * @a: awal int
 * @b: tani int
 * Return 0
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
