#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes a node at index
 * @head: Holds the head
 * @index: Holds the index to delete
 * Return: 1 if it succeed or -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *tmp = *head;
	dlistint_t *swapp = 0, *swapn = 0;

	for (i = 0; tmp; tmp = tmp->next, i++)
	{
		if (index == 0)
		{
			if (tmp->next)
			{
				swapn = tmp->next;
				swapn->prev = 0;
			}
			head[0] = swapn;
			free(tmp);
			return (1);
		}
		else if (i == index)
		{
			swapp = tmp->prev;
			if (tmp->next)
				swapn = tmp->next, swapn->prev = swapp, swapp->next = swapn;
			else
				swapp->next = 0;
			free(tmp);
			return (1);
		}
	}
	return (-1);
}
