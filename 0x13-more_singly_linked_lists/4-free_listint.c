#include "lists.h"

/**
 * free_listint - fonction codee
 * @head: inpute
 * Return: maso9akch raha a void
 */
void free_listint(listint_t *head)
{
	listint_t *nv = head, *nv2;

	while (nv)
	{
		nv2 = nv->next;
		free(nv);
		nv = nv2;
	}
}
