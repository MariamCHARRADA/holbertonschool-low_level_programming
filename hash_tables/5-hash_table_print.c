#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	char *sep = "";

	if (ht != NULL)
	{
		putchar('{');
		sep = "";
		while (i < ht->size)
		{
			while (ht->array[i])
			{
				printf("%s'%s': '%s'", sep, ht->array[i]->key, ht->array[i]->value);
				sep = ", ";
				i++;
			}
			i++;
		}
		putchar('}');
	}
}
