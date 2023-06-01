#include "lists.h"
#include <stdio.h>
/**
 * free_list - fonction  code
 * @head: iinpute pointer
 * Return: maso9akch a kimba.
 */
void free_list(list_t *head)
{
	list_t *nv, *nv2;

	nv = head;
	while (nv)
	{
		free(nv->str);
		nv2 = nv->next;
		free(nv);
		nv = nv2;
	}
}
