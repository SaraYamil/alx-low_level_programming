#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh
 * @head: A pointer hadchi li kayn f had inpute hhh
 *
 * Return: maso9akch a 3ami kimba hhhhhhhhhhhhI
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *t, *h;
	size_t nd = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	t = head->next;
	h = (head->next)->next;

	while (h)
	{
		if (t == h)
		{
			t = head;
			while (t != h)
			{
				nd++;
				t = t->next;
				h = h->next;
			}

			t = t->next;
			while (t != h)
			{
				nd++;
				t = t->next;
			}

			return (nd);
		}

		t = t->next;
		h = (h->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints li f had fonction w safe
 * @head: inpute type pointerf for this function
 *
 * Return: maso9akomch awili bzf lah ihdi ma khal9
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nds, index = 0;

	nds = looped_listint_len(head);

	if (nds == 0)
	{
		for (; head != NULL; nds++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nds; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nds);
}
