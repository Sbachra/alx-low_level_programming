#include "main.h"
#include <stdio.h>


/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)

{

	long int i, n;
	long int t1 = 1, t2 = 2;
	long int nextTerm = t1 + t2;

	n = 50;
	printf("%ld, %ld, ", t1, t2);

	for (i = 3; i <= n; ++i)
	{
		if (nextTerm == 20365011074)
		{
			printf("%ld", nextTerm);
			continue;
		}
		printf("%ld, ", nextTerm);
		t1 = t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;
	}
	putchar('\n');
	return (0);
}
