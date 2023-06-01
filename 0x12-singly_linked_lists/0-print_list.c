#include "lists.h"
#include <stdio.h>
/**
 * print_list - fonction peint list
 * @h: inpute
 * Return: maso9akch.
 */
size_t print_list(const list_t *h)
{
	const list_t *n = h;
	size_t cnt = 0;

	while (n)
	{
		n->str ? printf("[%d] %s\n", n->len, n->str) : printf("[0] (nil)\n");
		cnt++;
		n = n->next;
	}
	return (cnt);
}
