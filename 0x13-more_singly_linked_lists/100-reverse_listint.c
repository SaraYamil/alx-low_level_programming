#include "lists.h"

/**
 * reverse_listint - reverse a code fonction
 * @head: pointer ta3 awal node f liste
 *
 * Return: kimba comme on arah maso9akch hhhhhhhhhhhhh
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *pv = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = pv;
		pv = *head;
		*head = next;
	}

	*head = pv;

	return (*head);
}
