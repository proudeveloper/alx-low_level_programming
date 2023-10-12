#include "3-calc.h"

/**
 * op_add - Adds two integers
 *
 * @a: int
 * @b: int
 * Return: Sum of @a and @b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracts two integers
 *
 * @a: int
 * @b: int
 * Return: Difference of @a and @b
 */
int op_sub(int a, int b)
{
	return (a - b);

}

/**
 * op_mul - Multiplies two integers
 *
 * @a: int
 * @b: int
 * Return: Product of @a and @b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides two integers
 * @a: int parameter
 * @b: int parameter
 * Return: Returns @a divided by @b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Subtracts two integers
 * @a: int parameter
 * @b: int parameter
 * Return: The reminder after dividing @a and @b
 */
int op_mod(int a, int b)
{
	return (a % b);

}
