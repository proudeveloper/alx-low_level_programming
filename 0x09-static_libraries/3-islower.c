#include "main.h"

/**
 * _islower - this function checks for lowercase characters
 * @c: parameter to be verified
 * Return: set to 1 or 0
 */

int _islower(int c)

{
	if (c >= 'a' && c <= 'z')
		return (1);

	return (0);

}
