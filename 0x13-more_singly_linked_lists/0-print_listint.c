#include "lists.h"

/**
 * print_listint - foncton katapranty lina les elemnet ta3 listintg
 * @h: pointer ta3 listint
 * Return: maso9kach a kimba count  hh
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *nv = h;
	size_t cnt = 0;

	while (nv)
	{
		printf("%d\n", nv->n);
		cnt++;
		nv = nv->next;
	}
	return (cnt);
}
