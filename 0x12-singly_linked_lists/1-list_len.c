#include "lists.h"
/**
 * list_len - Counts nodes
 * @h: Holds the head
 * Return: amount of nodes
 */
size_t list_len(const list_t *h)
{
	size_t i;

	for (i = 0; h != 0; i++)
		h = h->next;
	return (i);
}
