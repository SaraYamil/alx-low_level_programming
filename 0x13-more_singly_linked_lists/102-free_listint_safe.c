#include "lists.h"

/**
 * free_listint_safe - fonction free listint safe
 * @h: pointe hhhhhhhhhhhhhhhhh hhhhhhh hhhhhhh hhh
 *
 * Return: maso9akch of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t lgn = 0;
	int dif;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		dif = *h - (*h)->next;
		if (dif > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			lgn++;
		}
		else
		{
			free(*h);
			*h = NULL;
			lgn++;
			break;
		}
	}

	*h = NULL;

	return (lgn);
}
