#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Function that reads a text file and prints
 *					it to the standard output
 * @filename: Pointer to file's name
 *
 * @letters: number of letters to be read and printed
 *
 * Return: File cannot be opened, 0, filename NULL, 0, write fails, 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t o, r, w;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(o);

	return (w);
}
