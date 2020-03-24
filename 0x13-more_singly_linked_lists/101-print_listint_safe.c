#include "lists.h"
/**
 * print_listint_safe  - Prints a linked list safely
 * @head: Holds the head
 * Return: Size of linked list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmp, *tmp1;
	size_t count, countj;

	tmp = tmp1 = head;
	for (count = 0; tmp != 0; count++, tmp = tmp->next)
	{
		for (tmp1 = head, countj = 0; count > countj; countj++, tmp1 = tmp1->next)
		{
			if (tmp == tmp1)
			{
				printf("-> [%p] %d\n", (void *)tmp, tmp->n);
				return (count);
			}
		}
		printf("[%p] %d\n", (void *)tmp, tmp->n);
	}
	return (count);
}