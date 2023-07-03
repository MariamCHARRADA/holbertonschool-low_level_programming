#include "main.h"
#include <stddef.h>
/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring
 * Return: ptr to the beginning of the located substring, or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int j, i = 0;

	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] != '\0')
		{
			if (haystack[i] == needle[j])
				j++;
		i++;
		}
	}
		return (&haystack[i]);
	return (NULL);
}
