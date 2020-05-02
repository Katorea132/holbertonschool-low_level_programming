#include "lists.h"
/**
 * add_dnodeint_end - This adds a node at the end
 * @head: Holds the head
 * @n: Holds the number to add
 * Return: an address to the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp;
	dlistint_t *lili = malloc(sizeof(dlistint_t));

	if (lili)
	{
		lili->n = n;
		if (*head)
		{
			for (tmp = *head; tmp->next; tmp = tmp->next)
				;
			lili->prev = tmp;
			tmp->next = lili;
			lili->next =  0;
			return (lili);
		}
		*head = lili;
		lili->next = 0;
		lili->prev = 0;
		return (lili);
	}
	return (0);
}
