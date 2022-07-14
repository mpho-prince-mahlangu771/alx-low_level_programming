#include "main.h"
/**
 * _strcpy - Copies a string
 * @dest: Destination string
 * @src: Source string
 * @n: Number of bytes copied
 * Description: Copies n bytes of src including the terminating null bype '\0'
 * to the buffer pointed by dest
 * Return: A pointer to the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i

	for (i = 0; src[i] != '\0'; i++)
	{
		if (i < n)
			dest[i] = src[i];
		while (i < n)
			dest[i++] = '\0';
	}
	return (dest);
}
