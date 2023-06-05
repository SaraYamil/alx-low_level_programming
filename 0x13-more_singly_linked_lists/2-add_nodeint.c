#include "lists.h"

/**
 * add_nodeint  fonction codeé
 * @head: inpute
 * @n: inpute
 * Return: maso9akch a zin
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nw;

	nw = malloc(sizeof(listint_t));
	if (nw == NULL)
		return (NULL);
	nw->n = n;
	nw->next = *head;
	*head = nw;
	return (nw);
}
