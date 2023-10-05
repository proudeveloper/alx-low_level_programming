#include "stdio.h"
#include "stdlib.h"

/**
 * main - Program that adds positive numbers
 * @argc: int
 * @argv: char**
 * Return: 0, otherwise 1 if one number containd non-digit symbols
 */
int main(int argc, char **argv)
{
	if (argc == 1)
	{
		puts("0");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
				{
					puts("Error");
					return (1);

				}
			}
			num = atoi(argv[i]);

			sum += num;
		}

		printf("%d\n", sum);
	}
	return (0);
}
