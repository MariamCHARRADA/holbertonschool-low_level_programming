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
	if (head == NULL)
	{
		new_node->str = strdup(str);
		new_node->next = NULL;
	}
	new_node->str = strdup(str);
	new_node->next = *head;
	return (new_node);	
}
