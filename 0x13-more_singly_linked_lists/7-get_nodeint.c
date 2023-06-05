#include "lists.h"

/**
 * get_nodeint_at_index - fonction ccode
 * @head: ipute
 * @index: inpute
 * Return: maso9akch
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nv;
	unsigned int i = 0;

	if (!head)
		return (NULL);
	nv = head;
	while (nv)
	{
		if (i == index)
			return (nv);
		nv = nv->next;
		i++;
	}

	return (NULL);
}
