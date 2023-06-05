#include "lists.h"

/**
 * delete_nodeint_at_index - fonction a  code
 * @head: b
 * @index: b
 * Return: A DIMA A 0
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *nv, *bf, *dltd;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);
	nv = *head;
	if (index == 0)
	{
		*head = nv->next;
		free(nv);
		return (1);
	}
	while (nv)
	{
		if (i == index)
			dltd = nv;
		if (i == index - 1)
			bf = nv;
		if (i == index + 1)
		{
			bf->next = nv;
			free(dltd);
			return (1);
		}
		if (nv->next == NULL && i == index)
		{
			bf->next = NULL;
			free(nv);
			return (1);
		}
		nv = nv->next;
		i++;
	}
	return (-1);
}
