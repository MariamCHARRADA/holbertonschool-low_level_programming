#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	char *sep = "";
	hash_node_t *node;

	if (ht != NULL)
	{
		putchar('{');
		sep = "";
		while (i < ht->size)
		{
			node = ht->array[i];
			while (node)
			{
				printf("%s'%s': '%s'", sep, node->key, node->value);
				sep = ", ";
				i++;
			}
			i++;
		}
		putchar('}');
		putchar('\n');
	}
}
