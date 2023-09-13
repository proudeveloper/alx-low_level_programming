#include <stdio.h>

/**
 * main - this function prints the 50 Fibonacci numbers
 *
 * Return: set to 0
 */
int main(void)

{
	unsigned long int parameter1 = 1;
	unsigned long int parameter2 = 2;
	unsigned long int next;
	int i;

	printf("%d, ", parameter1);
	for (i = 1 ; i < 50 ; i++)
	{
		printf("%d, ", parameter2);
		next = parameter1 + parameter2;
		parameter1 = parameter2;
		parameter2 = next;
		if (i != 49)
			printf(", ");
	}
	printf("\n");
	return (0);


}
