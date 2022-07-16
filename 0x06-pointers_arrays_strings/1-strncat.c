#include "main.h"
/**
 * _strncat - Concatenates two strings
 * @dest: Destination string
 * @src: Source string
 * @n: Number of bytes to be copied
 * Description: Appends the src to dest overwriting the terminating null byte -
 * '\0'at dest. It will use at most n bytes from src and src does not need -
 * to be null-terminated if it contains n or more bytes
 * Return: A pointer to the resulting string of dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int stringlen;

	for (stringlen =0; src[stringlen] != '\0'; ++stringlen)
	{
	}
	for (i = 0; i < n; i++)
	{
		dest[i + stringlen] = src[i];
		if (src[i] == '\0')
			i = n;
	}
	return (dest);
}

