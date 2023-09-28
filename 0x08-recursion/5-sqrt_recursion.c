#include "main.h"

/**
 * _sqrt_recursion - this returns the natural square root of a number
 * @n: this is a parameter
 * @i: second parameter
 * Return: void
 */
int _sqrt_recursion(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (_sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - this returns the natural square root of a number
 * @n: this is a parameter
 * Return: void
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_helper(n, 0));
}
