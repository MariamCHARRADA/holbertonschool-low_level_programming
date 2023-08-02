#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list
 * @head: double pointer to the head of the linked list
 * @str: pointer to a string to be stored in the new node
 * Return: the address of the new element, or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node_end;
/*	list_t *current;*/

	node_end = malloc(sizeof(list_t));
	if (str == NULL || node_end == NULL)
	{
		return (NULL);
	}
	node_end->str = strdup(str);
	node_end->len = strlen(str);
	node_end->next = NULL;
	if (node_end->str == NULL)
	{
		free(node_end);
		return (NULL);
	}
	if ((*head) == NULL)
	{
		(*head) = node_end;
	}
	return (node_end);
}
