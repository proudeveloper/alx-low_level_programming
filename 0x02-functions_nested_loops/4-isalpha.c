#include "main.h"

/**
 * _isalpha - this function checks for alphabet character
 *@c: parameter verifier
 * Return: set to 1 or 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);

}
