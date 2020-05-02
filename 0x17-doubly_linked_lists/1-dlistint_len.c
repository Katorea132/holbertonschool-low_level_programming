#include "lists.h"
/**
 * dlistint_len - Returns lenght of list
 * @h: Holds the head
 * Return: lenght
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h; h = h->next, i++)
		;
	return (i);
}
