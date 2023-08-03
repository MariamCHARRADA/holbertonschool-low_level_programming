#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to the head of the list
 * @index: the index of the node (starting from 0)
 * Return: the nth node (if it exists), or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current;

	current = head;
	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}
	return (current);
	return (NULL);
}
