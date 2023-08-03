#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: double pointer to the head of the linked list
 * @n: integer
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (*head == NULL)
		*head = new;	
	new->n = n;
	if (new == NULL)
		return (NULL);
	new->next = *head;
	*head = new;
	return (new);
}
