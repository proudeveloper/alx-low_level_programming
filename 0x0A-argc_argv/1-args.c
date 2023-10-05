#include "stdio.h"

/**
 * main - Program prints the number of arguments passed to it
 * @argc: int
 * @argv: char**
 * Return: Always 0
 */
int main(int argc, __attribute__((unused)) char **argv)
{
	printf("%d\n", argc - 1);

	return (0);
}
