#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the file name
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *text;

	if (filename == NULL)
		return (0);

	text = malloc(letters * sizeof(char));
	if (text == NULL)
		return (0);

	o = open(filename, 0);
	r = read(o, text, letters);
	w = write(1, text, r);

	if (o == -1 || r == -1 || w == -1)
	{
		free(text);
		return (0);
	}
	close(0);
	return (w);
}
