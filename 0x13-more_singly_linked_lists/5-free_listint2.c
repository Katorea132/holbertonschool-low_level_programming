#include "lists.h"
/**
 * free_listint2 - Frees lists and sets head to null
 * @head: Pointer to the head pointer
 * Return: none
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp = *head, *tmp1;

	while (tmp)
	{
		tmp1 = tmp;
		tmp = tmp->next;
		free(tmp1);
	}
	*head = 0;
}
