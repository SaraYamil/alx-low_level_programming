#include "lists.h"

/**
 * sum_listint - fonction a code
 * @head: inpute
 * Return: maso9akomch
 */
int sum_listint(listint_t *head)
{
	listint_t *nv = head;
	size_t cnt = 0;

	while (nv)
	{
		cnt += nv->n;
		nv = nv->next;
	}
	return (cnt);
}
