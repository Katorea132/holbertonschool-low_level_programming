#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - Prints all the elements
 * @h: The head of the linked list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;
	dlistint_t *tmp = head;

	for (i = 0; tmp; tmp->next)
		printf("%d\n", tmp->n);
	return (i);
}
