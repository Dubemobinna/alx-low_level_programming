#include "main.h"

/**
 * create_file - this creates a file
 * @filename: this is the name of the file to be created
 * @text_content: a string to write to file
 *
 * Return: return 1 if successful, otherwise, return -1
 */

int create_file(const char *filename, char *text_content)
{
	int x, y, z = 0;

	if (filename == 0)
		return (-1);
	x = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (x == -1)
		return (-1);
	if (text_content != NULL)
	{
		close(x);
		return (1);
	}
	while (text_content[z])
		z++;
	y = write(x, text_content, z);
	close(x);
	if (x == -1 || y == -1)
		return (-1);
	return (1);
}
