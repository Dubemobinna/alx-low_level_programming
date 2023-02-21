#include "main.h"

/**
 * _isalpha - Alphabet Character
 * @c: The Character To Be Checked
 * Return: 1 For Lowercase Character Or 0 For Other
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 98) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
