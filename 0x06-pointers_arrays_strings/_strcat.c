#include <unistd.h>
#include <string.h>

void _strcat(char *str, char c)
{
	/*
	 * Implementation of the _strcat function
	 */
	size_t len = strlen(str);
	
	/* Add the character to the end of the string
	 */
	str[len] = c;

	/* Null-terminate the string again
	 */
	str[len + 1] = '\0';
}
