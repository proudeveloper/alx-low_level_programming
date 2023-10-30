#include <stdlib.h>
#include <stdio.h>

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, j, num, sum = 0;
p_hWoAChSlEqh5SqISOdbcemumt72txK4Xtysj	if (argc == 1)
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
