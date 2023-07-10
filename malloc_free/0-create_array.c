#include "main.h"
/**
 * create_array - creates an array of chars initialized by c
 * @size: size of array
 * @c: initialization character
 * Return: 0 or NULL
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *a;
	
	if (size == 0)
		return (NULL);
	a = malloc(size * sizeof(char));
	if (a == NULL)
		return (NULL);
	while (i < size)
	{
		a[i] = c;
		i++;
	}
	return (a);
}
