#include "main.h"
/**
 * create_file - creates a file
 * @filename: the name of the file to create
 * @text_content: string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{

	int o, w, len;


	if (filename == NULL)
		return (-1);

	len = strlen(text_content);

	o = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (text_content != NULL)
		w = write(o, text_content, len);

	if (o == -1 || w == -1)

		return (-1);

	close(o);
	return (1);

}
