#include <stdio.h>

/**
 * calculateSum - Calculates the sum of even Fibonacci values
 *
 * Return: The sum of even Fibonacci values
 */
unsigned long int calculateSum(void)
{
	int i;
	unsigned long int j, k, next, sum;

	j = 1;
	k = 2;
	sum = 0;

	for (i = 1; i <= 33; ++i)
	{
		if (j < 4000000 && (j % 2) == 0)
		{
			sum = sum + j;
		}
		next = j + k;
		j = k;
		k = next;
	}

	return (sum);
}

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int sum = calculateSum();

	printf("%lu\n", sum);

	return (0);
}

