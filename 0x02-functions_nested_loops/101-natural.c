#include <stdio.h>

/**
 * main - this function computes and prints the sum of 3 or 5
 *
 * Return: set to 0
 */
int main(void)
{
	int i;
	int sum = 0;

	for (i = 0 ; i < 1024; i++)
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	printf("%d\n", sum);
	return (0);

}
