#include "lists.h"
/**
 * sum_listint - Sums the values in the list
 * @head: Holds the head
 * Return: the result of the sum
 */
int sum_listint(listint_t *head)
{
	listint_t *lili = head;
	unsigned int i;
	int sum = 0;

	for (i = 0; lili != 0; i++)
	{
		sum += lili->n;
		lili = lili->next;
	}
	return (sum);
}
