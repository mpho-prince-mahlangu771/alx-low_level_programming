#include "main.h"
/**
 * rev_string - Reverses a string
 * @s: A pointer character string
 * Return: void
 */
void rev_string(char *s)
{
	int i;
	int stringlen;
	int tmp;

	for (stringlen = 0; s[stringlen] != '\0'; ++stringlen)
	{
	}
	for (i = 0; i < (stringlen /2); i++)
	{
		tmp = s[i];
		s[i] = s[stringlen - i - 1];
		s[stringlen - i - 1] = tmp;
	}
	_putchar('\n');
}
