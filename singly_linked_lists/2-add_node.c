#include "lists.h"
/**
 * add_node -  adds a new node at the beginning of a list
 * @head: double pointer to the head of the linked list
 * @str: pointer to a string to be stored in the new node
 * Return: the address of the new element, or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (str == NULL || new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
