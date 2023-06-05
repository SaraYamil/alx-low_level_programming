#include "lists.h"

/**
 * free_listint2 - fonction a codee
 * @head: inpute
 * Return: maso9akch
 */
void free_listint2(listint_t **head)
{
	listint_t *nv, *nv2;

	if (head == NULL || *head == NULL)
		return;
	nv = *head;
	while (nv)
	{
		nv2 = nv->next;
		free(nv);
		nv = nv2;
	}
	*head = NULL;
}
