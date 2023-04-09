#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - this function reads a textfile and prints to STDOUT
 * @filename: Name of file
 * @letters: no of letters to be read and printed
 * Return: return 0 if the function fails or filename is NULL
 * the actual no of bytes that can be read or printed by the function - 0/w
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t x, y, w;

	x = open(filename, O_RDONLY);
	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	y = read(x, buffer, letters);
	w = write(STDOUT_FILENO, buffer, y);

	if (x == -1 || y == -1 || w == -1 || w != y)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(x);

	return (w);
}
