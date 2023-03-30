#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - function returns then number of elements in a linked
 * list_list list.
 * @h: singly linked list.
 * Return: number of elements in the list.
 */
size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
