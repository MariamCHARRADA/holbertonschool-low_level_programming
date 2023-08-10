#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	long unsigned int i = 0;

	if (ht != NULL)
	{
		putchar('{');
		while (i < ht->size)
		{
			while (ht->array[i])
			{
				printf("'%s': '%s', ", ht->array[i]->key, ht->array[i]->value);
				i++;
			}
			i++;
		}
		putchar('}');
	}
}
