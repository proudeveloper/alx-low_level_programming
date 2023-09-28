#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: the parameter to be used
 * Return: void
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
