#include "main.h"

/**
 * _antoi - Changes a string to an integer
 * @s: The string to be changed
 *
 * Return: The integer value of the converted  string.
 */

int _antoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	do {
		if (*s == '-')
			sign *= -1;

		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');

		else if (num > 0)
			break;

	} while (*s++);

	return (num * sign);

}