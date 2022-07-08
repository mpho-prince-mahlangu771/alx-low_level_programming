#include "main.h"
/**
 * print_line - Draws a straight line on the terminal using the character _ 
 * Return: Straight line  if n>0, a \n if n<=0
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar('_');
		_putchar('\n');
	}
	else
		_putchar('\n');
}

