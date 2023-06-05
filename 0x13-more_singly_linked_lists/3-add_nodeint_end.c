#include "lists.h"

/**
 * add_nodeint_end - foncton  codee
 * @head: inpute
 * @n: inpute
 * Return: maso9akch
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nw, *nv = *head;

	nw = malloc(sizeof(listint_t));
	if (nw == NULL)
		return (NULL);
	nw->n = n;
	nw->next = NULL;
	if (!nv)
		*head = nw;
	else
	{
		while (nv->next)
			nv = nv->next;
		nv->next = nw;
	}
	return (nw);
}
