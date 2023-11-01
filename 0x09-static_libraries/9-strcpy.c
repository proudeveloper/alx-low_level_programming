#include "main.h"

/**
 * _strcpy - this is the function
 *@dest: destination buffer
 *@src: source string
 * Return: char*
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;

		count++;

	}
	return (dest);
}
