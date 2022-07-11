#include "main.h"
/**
 * _strlen - Calculates the lenght of a string
 * @s: A character string
 * Return: Length of a string.
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i);
	return (i);
}
