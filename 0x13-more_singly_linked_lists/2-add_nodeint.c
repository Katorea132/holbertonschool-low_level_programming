#include "lists.h"
/**
 * add_nodeint - Adds a node at the biggning
 * @head: Holds a pointer to the head pointer
 * @n: Holds the number to be put in
 * Return: a pointer to the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *lili;

	lili = malloc(sizeof(listint_t));
	if (lili == 0)
		return (0);
	lili->n = n;
	lili->next = *head;
	*head = lili;
	return (lili);
}
