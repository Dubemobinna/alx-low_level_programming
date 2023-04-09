#include "main.h"

/**
 * append_text_to_file - this appends text at the end of a file
 * @filename: this is the name of the file
 * @text_content: this is the string to add at the end of the file
 * Return: if function fails, return -1, return 1 for success
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int x, y, z = 0;

	if (!filename)
		return (-1);
	if (text_content != NULL)
	{
		for (z = 0; text_content[z];)
			z++;
	}
	x = open(filename, O_WRONLY | O_APPEND);
	y = write(x, text_content, z);

	if (x == -1 || y == -1)
		return (-1);

	close(x);
	return (1);
}
