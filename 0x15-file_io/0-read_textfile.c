#include "main.h"
#include <stdlib>

/**
 * read_textfiile - this function reads a textfile and prints to STDOUT
 * @filename: Name of file
 * @letters: no of letters to be read and printed
 * Return: return 0 if the function fails or filename is NULL
 * 	the actual no of bytes that can be read or printed by the function - 0/w
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char* buffer;
	ssize_t x, y, w;

	x = open(filename, O_RDONLY);
	y = read(x, buffer, letters);
	z = write(STDOUT_FILENO, buffer, y);

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(x);

	return (w);
}
