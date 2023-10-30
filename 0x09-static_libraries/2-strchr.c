#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to search
 * @c: character to find
 * Return: pointer to the first occurence of the character c in the string s,
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	while (*s++ != '\0')
		if (*s == c)
			return (s);

	return ((void *)0);
}
