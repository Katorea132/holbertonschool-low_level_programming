#include "lists.h"
/**
 * sum_dlistint - Sums from a list
 * @head: Holds the head
 * Return: Returns the sum of the elemnts of the list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	for (; head; head = head->next)
		sum += head->n;
	return (sum);
}
