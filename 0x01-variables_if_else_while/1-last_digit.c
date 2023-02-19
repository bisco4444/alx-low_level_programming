#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 * Return: Always 0
 */
int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;

	if (l > 5)
	{
		printf("Last digit of %d", n "is %d", l "and is greater than 5\n");
	}
	else if (l == 0)
	{
		("Last digit of %d" n "is %d", l "and is 0");
	}
	else
	{
		printf("Last digit of %d" n "is %d", l "and is less than 6 but not 0");
	}
	return (0);
}
