#include "lists.h"
/**
 * print_list - Prints all elements of the linked list
 * @h: Holds the head
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i;

	for (i = 0; h != 0; i++)
	{
		if (h->str == 0)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	return (i);
}
