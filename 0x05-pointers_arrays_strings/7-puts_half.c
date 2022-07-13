#include "main.h"
/**
 * puts_half - Prints half of a string
 * @str: a character string array
 * Description: The function prints the second half of the string
 * but prints the last character(n) of the string if the # of characters is odd
 * Return: void
 */
void puts_half(char *str)
{
	int i;
	int n;
	int stringlen;
	int stringmiddle;
	
	for (stringlen = 0; str[stringlen] != '\0'; ++stringlen)
	{
	}
	stringmiddle = stringlen / 2;
	if (stringlen % 2 == 0)
	{
		for (i = stringmiddle; str[i] != '\0'; i++)
			_putchar(str[i]);
	}
	else
	{
		n = (stringlen - 1) / 2;
		for (i = n; str[i]; i++)
			_putchar(str[n]);
	}
	_putchar('\n');
}
