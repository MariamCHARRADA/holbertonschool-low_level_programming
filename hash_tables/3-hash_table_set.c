#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table to add or update the key/value to
 * @key: the key string
 * @value: the value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	hash_node_t *element;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	element = ht->array[index];

	while (element) /* until list end */
	{
		if (strcmp(key, element->key) == 0)
		{
			free(element->value);
			element->value = strdup(value);
			return (1);
		}
		element = element->next;
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);
	new->next = element;
	element = new;

	return (1);
}
