#include "main.h"
/**
 * print_rev - Prints a string in reverse
 * @s: A pointer string. A string is an array & pointer
 * Return: A reverse string
 */
void print_rev(char *s)
{
	int len;
	int i;

	len = _strlen(s);
	for (i = len -1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
