#include "main.h"

/**
 * _isalpha - Identifies alphabetic characters
 * @c: the character
 * Return: 1 if c is alphabet else return 0
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		if (c >= 'A' && c <= 'Z')
			return (1);
		else
			return (0);
	}
}
