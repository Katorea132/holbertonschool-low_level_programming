#include "lists.h"
/**
 * add_dnodeint - Adds a node at the beginning of the list
 * @head: Holds the head
 * @n: Holds the number to put in the list
 * Return: Address of new element or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *lili = malloc(sizeof(dlistint_t));

	if (lili && *head)
	{
		lili->n = n;
		lili->prev = 0;
		lili->next = *head;
		(*head)->prev = lili;
		*head = lili;
		return (lili);
	}
	return (0);
}
