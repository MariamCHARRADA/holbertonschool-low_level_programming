#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the file name
 * @text_content: NULL terminated string to append
 * Return: 1 on success, -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len;

	if (filename == NULL)
		return (-1);

	o = open(filename, O_APPEND | O_WRONLY);
	if (o == -1)
		return (-1);
	if (text_content != NULL)
	{
		len = strlen(text_content);
		w = write(o, text_content, len);
	}

	if (w == -1)
		return (-1);

	close(o);
	return (1);
}
