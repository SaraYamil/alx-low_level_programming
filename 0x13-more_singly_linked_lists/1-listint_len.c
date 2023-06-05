#include "lists.h"
/**
 * listint_len -fonction codeé
 * @h: input
 * Return: maso9kach
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *nv = h;
	size_t cnt = 0;

	while (nv)
	{
		cnt++;
		nv = nv->next;
	}
	return (cnt);
}
