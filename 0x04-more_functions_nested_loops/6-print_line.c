#include "main.h"
/**
 * print_line - Draws a straight line on the terminal using the character _ 
 * @n: Is the number of times the character _ should be printed
 * Return: Straight line  if n>0, a \n if n<=0
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar('-');
		_putchar('\n');
	}
	else
		_putchar('\n');
}

