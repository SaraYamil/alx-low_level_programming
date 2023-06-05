#include "lists.h"

/**
 * insert_nodeint_at_index - fonctiona codee
 * @head: inpute
 * @idx: inpute
 * @n: inpute
 * Return: maso9akch
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nv, *nw, *bf;
	unsigned int i = 0;

	if (!head)
		return (NULL);
	nv = *head;
	nw = malloc(sizeof(listint_t));
	if (!nw)
		return (NULL);
	nw->n = n;
	nw->next = NULL;
	if (idx == 0)
	{
		nw->next = *head;
		*head = nw;
		return (nw);
	}
	while (nv)
	{
		if (i == idx - 1)
			bf = nv;

		if (i == idx)
		{
			nw->next = nv;
			bf->next = nw;
			return (nw);
		}
		if (!nv->next && i + 1 == idx)
		{
			nv->next = nw;
			return (nw);
		}
		nv = nv->next;
		i++;
	}
	return (NULL);
}
