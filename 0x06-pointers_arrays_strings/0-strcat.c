#include "main.h"
/**
 * _strcat - Concatenates two strigs
 * @dest: Destination string
 * @src: Source string
 * Description: Appends the src to dest overwriting the terminating null byte -
 * '\0' at dest, and then adds the aterminating null byte
 * Return: A pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j] != '\0'; j++)
		dest[i + j] = src[j];
	dest[i + j] = '\0';
	return (dest);
}



