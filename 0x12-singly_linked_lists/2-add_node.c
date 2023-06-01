#include "lists.h"
#include <stdio.h>
/**
 * add_node - fonctio add node
 * @head: input
 * @str: input
 * Return: maso9akch
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n;
	int cnt = 0;

	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);
	n->str = strdup(str);
	while (str[cnt])
		cnt++;
	n->len = cnt;
	n->next = *head;
	*head = n;
	return (n);
}
