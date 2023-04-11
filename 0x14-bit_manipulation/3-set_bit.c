#include "main.h"

/**
 * set_bit - this sets bit of a given index to 1
 * @n: this is the range taht will change
 * @index: this is the index set to 1
 * Return: Return 1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n |= x;
	return (1);
}
