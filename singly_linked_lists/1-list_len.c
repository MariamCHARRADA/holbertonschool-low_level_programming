#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to the head of the linked list
 * Return: the number of nodes in the list
 */
size_t list_len(const list_t *h)
{
	int ndcount = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		ndcount++;
		current = current->next;
	}
	return (ndcount);
}
