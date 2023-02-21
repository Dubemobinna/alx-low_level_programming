#include "main.h"
/**
 * _abs - Computes Absolute Value Of An Integer
 * @c: The Number To Be Computed
 * Return: Absolute Value Of Number Or 0
 */

int _abs(int c)
{
	if (c < 0)
	{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}
