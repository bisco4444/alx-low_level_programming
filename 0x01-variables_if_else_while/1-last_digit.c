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
		printf("Last digit of %d is %d  and is greater than 5\n" l, n);
	}
	else if (l == 0)
	{
		("Last digit of %d is %d and is 0\n" l, n);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 but not 0\n" l, n);
	}
	return (0);
}
