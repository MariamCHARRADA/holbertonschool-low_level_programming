#include "lists.h"
/**
 * add_dnodeint_end -  adds a new node at the end of a dlistint_t list
 * @head: double pointer to the head of the list
 * @n: integer
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *end;
	dlistint_t *current;

	end = malloc(sizeof(dlistint_t));
	if (end == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		(*head)->next = end;
	current = *head;
	while (current->next != NULL)
		current = current->next;
	current->next = end;
	end->n = n;
	end->next = NULL;
	end->prev = current;
	return (end);
}
