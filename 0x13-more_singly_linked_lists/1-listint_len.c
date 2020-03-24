#include "lists.h"
/**
 * listint_len - Tells the lenght of a node
 * @h: Holds the header
 * Return: the lenght of linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	for (i = 0; h != 0; i++, h = h->next)
		;
	return (i);
}
