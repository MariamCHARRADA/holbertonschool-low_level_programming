#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the head of the linked list
 * Return: the number of nodes in the list
 */
size_t print_list(const list_t *h);
{
	int ndcount = 0;
	list_t current;

	current->str= h;
	while (current != NULL)
	{
		if (str == NULL)
			printf("[0] (nil)");
		printf(current->str);
		ndcount++;

	}
	return (ndcount);
}

