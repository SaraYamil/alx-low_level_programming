#include "lists.h"
#include <stdio.h>
/**
 * add_node_end - foonction add node end
 * @head: inpute
 * @str: inpute
 * Return: maso9akch
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n;
	int cnt = 0;
	list_t *nav = *head;

	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);
	n->str = strdup(str);
	while (str[cnt])
		cnt++;
	n->len = cnt;
	n->next = NULL;

	if (nav == NULL)
		*head = new;
	else
	{
		while (nav->next != NULL)
			nav = nav->next;
		nav->next = n;
	}
	return (n);
}
