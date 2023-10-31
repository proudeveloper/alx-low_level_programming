#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int  * _strcpy(char *dest, char *src);
char *_strchr(char *s, char c);
int _isupper(int c);
int _isdigit(int c);
int _antoi(char *s);
int _isalpha(int c);
void _puts(char *str);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
int _islower(int c);
int _abs(int n);
int _strlen(char *s);
int _strcmp(char *s1, char *s2);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
#endif

