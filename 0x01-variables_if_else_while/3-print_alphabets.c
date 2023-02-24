#include <stdio.h>
/**
 * Main -  Entry point
 * Description: 'Prints alphabets in lowercase and uppercase'
 * Return: Always 0 (success)
 */
int main (void) 
{
	char ch;
	char CH;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (CH = 'A'; CH <= 'Z'; CH++)
	{
		putchar(CH);
	}
	putchar('\n');
		return (0);
}
