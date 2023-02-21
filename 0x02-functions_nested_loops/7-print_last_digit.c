#include "main.h"
/**
 * print_last_digit - Prints Last Digit
 * @n: The Number To Be Treated
 * Return: Last Digit Of Number
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
	last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
