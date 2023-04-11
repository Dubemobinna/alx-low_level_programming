#include "main.h"

/**
 * binary_to_uint - this does the conversion from binary to unsigned int
 * @b: this is a string
 * Return: Return the number that was converted
 */

unsigned int binary_to_uint(const char *b)
{
	int x = 0;
	unsigned int y = 0;

	if (!b)
		return (0);
	for (x = 0; b[x]; x++)
	{
		if (*(b + x) != '0' && *(b + x) != '1')
			return (0);
		y = 2 * y + (b[x] - '0');
	}
	return (y);
}
