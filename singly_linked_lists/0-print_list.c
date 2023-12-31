#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the head of the linked list
 * Return: the number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	int ndcount = 0;
	const list_t *current;

	current = h;
	while (current != NULL)
	{
		if (current->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%u] %s\n", current->len, current->str);
		}
		ndcount++;
		current = current->next;
	}
	return (ndcount);
}
