#include "lists.h"
#include <stdio.h>
/**
 * list_len - FONCTION code
 * @h: INPUTE
 * Return: MASO9akch
 */
size_t list_len(const list_t *h)
{
	const list_t *n = h;
	size_t cnt = 0;

	while (n)
	{
		cnt++;
		n = n->next;
	}
	return (cnt);
}
