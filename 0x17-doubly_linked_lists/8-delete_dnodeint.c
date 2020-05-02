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
/**
 * delete_dnodeint_at_index - Deletes a node at index
 * @head: Holds the head
 * @index: Holds the index to delete
 * Return: 1 if it succeed or -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	size_t len = dlistint_len(*head);
	dlistint_t *tmp = *head;
	dlistint_t *swapp = 0, *swapn = 0;
	
	for (i = 0; tmp; tmp = tmp->next, i++)
	{
		if (index == len && index == i)
		{
			swapp = tmp->prev;
			swapp->next = 0;
			free(tmp);
			return (1);
		}
		else if (index == 0)
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
			swapn = tmp->next;
			swapp = tmp->prev;
			swapp->next = swapn;
			swapn->prev = swapp;
			free (tmp);
			return (1);
		}
	}
	return (-1);
}
