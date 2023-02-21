#include "main.h"
/**
 * print_sign - Prints Number Sign
 * @n: The Number To Be Checked
 * Return: 1 For Positive, -1 Negative, 0, Others
 */

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}
