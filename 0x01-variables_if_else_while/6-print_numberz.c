#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10 starting from 0,
 * followed by a new line, using putchar
 * Return: 0 (success)
 */
int main(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
