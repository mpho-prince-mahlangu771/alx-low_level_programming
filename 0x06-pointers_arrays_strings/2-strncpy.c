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
	char *p;

	if (dest == NULL)
		return NULL;
	p = dest;
	while (*src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (p);
}
