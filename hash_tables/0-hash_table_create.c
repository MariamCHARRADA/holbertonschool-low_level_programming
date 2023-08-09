#include "hash_tables.h"
/**
 * hash_table_create - creates a hashtable
 * @size: the size of the array
 * Return: a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	table = malloc(sizeof(hash_table_t));
	
	if (table == NULL)
		return (NULL);

	table->size = size;

	return (table);
}
