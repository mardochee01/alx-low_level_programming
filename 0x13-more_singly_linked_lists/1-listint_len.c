#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * listint_len -  returns the number of elements in a linked listint_t list.
 * @h: pointer to the list to prints
 *
 *
 * Return: number of elements in list
 */
size_t listint_len(const listint_t *h)
{
	size_t elements = 0;

	while (h)
	{
		h = h->next;
		elements++;
	}
	return (elements);
}
