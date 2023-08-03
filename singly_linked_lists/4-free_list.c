#include "lists.h"
/**
 * free_list - frees a list_t list
 * @head: pointer to the head of the linked list
 */
void free_list(list_t *head)
{
	list_t *tmp;

	tmp = head;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		free(head);
		head = tmp;
	}
}
