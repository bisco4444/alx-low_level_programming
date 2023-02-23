#include "main.h"
/**
 * Main - prints alpha in lowercase
 */
void print_alphabet_x10(void);
{
	char alpha;
	int t;

	for (t = 0; t <= 9; t++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
			_putchar(alpha);
		_putchar('\n');
	}

