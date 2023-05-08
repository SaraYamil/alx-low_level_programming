#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function w safe
 * @a: variable li ghlto
 * @size: hta ana
 * Return: maso9akch
 */
void print_diagsums(int *a, int size)
{
	int sara, yamil, y;

	sara = 0;
	yamil = 0;

	for (y = 0; y < size; y++)
	{
		sara = sara + a[y * size + y];
	}

	for (y = size - 1; y >= 0; y--)
	{
		yamil += a[y * size + (size - y - 1)];
	}

	printf("%d, %d\n", sara, yamil);
}
