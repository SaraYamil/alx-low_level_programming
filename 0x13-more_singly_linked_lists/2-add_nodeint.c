#include "lists.h"

/**
 * add_nodeint - Aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
 * @head: Pointe hhhhhhhhhhhhhhhhhhh
 * @n: Data hhhhhhhhhhhhhhhhhhhhh
 * Return: Pointer hhhhhhhhhhhhhhhhhhhhhhh
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nw = malloc(sizeof(*nw));

	if (!nw)
		return (NULL);

	nw->n = n;
	nw->next = *head;
	*head = nw;

	return (nw);
}

