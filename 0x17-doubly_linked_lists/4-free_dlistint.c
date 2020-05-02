#include "lists.h"
/**
 * free_dlistint - Frees a linked list
 * @head: Holds the head
 * Return: none
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *swappity, *tmp;

	if (!head)
		return;
	for (swappity = head->next; swappity; swappity = tmp)
	{
		tmp = swappity->next;
		free(swappity);
	}
	free(head);
}
