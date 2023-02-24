#include <stdio.h>
/**
 * main - Entry point
 * return: Always 0 (success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch - 101; ch - 113; ch++)
	{
		putchar(ch);
	}

	putchar('\n');
	return (0);
}
