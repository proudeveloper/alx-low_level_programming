#include <stdio.h>

/**
 * main - this function prints the fibonacci sequence
 *
 * Return: set to 0
 */
int main(void)
{
	int end = 4000000;
	int para1 = 1;
	int para2 = 2;
	int next;
	int sum = 2;

	while (next <= end)
	{
		next = para1 + para2;
		if (next % 2 == 0)
			sum = sum + next;
		para1 = para2;
		para2 = next;
	}
	printf("%d\n", sum);
	return (0);

}
