#include "lists.h"
/**
 * print_listint - prints all the elements of a list
 * @h: Holds the lists
 * Return: amount of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i;

	for (i = 0; h != 0; i++, h = h->next)
		printf("%d\n", h->n);
	return (i);
}
