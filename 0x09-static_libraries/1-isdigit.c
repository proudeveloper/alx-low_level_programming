#include "main.h"

/**
 * _isdigit - verifies for a digit
 * @c: character to be verified
 * Return: return 1 if @c is a digit. 0 if otherwise
 */
int _isdigit(int c)
{
	return ((c >= '0' && c <= '9') ? 1 : 0);
}

