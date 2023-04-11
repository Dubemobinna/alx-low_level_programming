#include "main.h"

/**
 * get_bit - this returns the value of a bit at a given index
 * @index: the index of the bit
 * @n: the range to search
 * Return: Return the value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int x = 1;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	x = (n >> index) & 1;
	return (x);
}
