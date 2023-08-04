#include "lists.h"
/**
 * sum_dlistint - returns the sum of data of a dlistint_t linked list
 * @head: pointer to the head of the list
 * Return: sum or 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current;

	current = head;
	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
