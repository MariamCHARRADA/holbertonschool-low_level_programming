#include "hash_tables.h"
/**
 * hash_table_create - creates a hashtable
 * @size: the size of the array
 * Return: a pointer to the newly created hash table or NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *table;

	table = malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);

	table->size = size;

	table->array = malloc(size * sizeof(hash_table_t));

	while (i < size)
		table->array[i] = NULL;

	return (table);
}
