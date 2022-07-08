#include "main.h"
/**
 * print_diagonal - Draws a diagonal line on the terminal
 * @n: Is the number of times the character \ should be printed
 * Description: Uses the character \ to draw the diagonal
 * Return: A diagonal if n>0, else a newline(\n) if n<0
 */
void print_diagonal(int n)
{
	int i;
	int j;
	
	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (i == j)
					_putchar('\\');
				else
					_putchar(' ');
			}
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}




