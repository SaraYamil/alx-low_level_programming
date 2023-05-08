#include "main.h"

/**
 * print_chessboard - fonction machoglnach
 * @a: pointer a sidi
 * Return: maso9akh
 */

void print_chessboard(char (*a)[8])
{
	int i, L;

	for (i = 0; i < 8; i++)
	{
		for (L = 0; L < 8; L++)
		{
			_putchar(a[i][L]);
		}
		_putchar('\n');
	}
}
