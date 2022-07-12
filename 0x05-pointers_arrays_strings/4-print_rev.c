#include "main.h"
/**
 * print_rev - Prints a string in reverse
 * @s: A pointer string. A string is an array & pointer
 * @strlen: calculates the length of string S
 * Return: A reverse string
 */
void print_rev(char *s)
{
	int strlen;
	int i;

	for (strlen = 0; s[strlen] != '\0';
		       	++strlen);

	for (i = strlen -1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
