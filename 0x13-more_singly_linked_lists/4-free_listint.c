#include "lists.h"
/**
 * free_listint - frees the structs
 * @head: Holds the start of the list
 * Return: none
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;
	unsigned int i;

	for (i = 0; head != 0; i++)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
