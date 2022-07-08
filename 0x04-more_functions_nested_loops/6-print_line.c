#include "main.h"
/**
 * print_line - Draws a straight line on the terminal
 * @n: Is the number of times the character _ should be printed
 * Description: Uses the character _ to draw the line
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

