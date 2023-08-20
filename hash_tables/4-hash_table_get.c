#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the hash table to be looked into
 * @key: the key to be looked for
 * Return: the value associated with the element, or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{

	unsigned long int i;
	hash_node_t *element;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	i = key_index((const unsigned char *)key, ht->size);
	element = ht->array[i];

	while (element)
	{
		if (strcmp(element->key, key) == 0)
			return (element->value);
		element = element->next;
	}


	return (NULL);
}
