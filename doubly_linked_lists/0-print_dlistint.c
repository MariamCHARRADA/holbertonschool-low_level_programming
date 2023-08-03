#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to the head of the linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current;
	int i = 0;

	current = h;
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		i++;
	}
	return (i);
}
