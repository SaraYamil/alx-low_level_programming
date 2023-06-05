#include "lists.h"

/**
 * pop_listint - fonction coodee
 * @head: inpute
 * Return: maso9akch
 */
int pop_listint(listint_t **head)
{
	listint_t *tp;
	int dt;

	if (*head == NULL)
		return (0);
	dt = (*head)->n;
	tp = *head;
	*head = (*head)->next;
	free(tp);
	return (dt);
}
