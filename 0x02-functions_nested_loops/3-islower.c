#include "main.h"

/**
 * _islower - shows lowercase alphabets
 * @c: the character
 * Return: 1 if  character is lowercase else return 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
