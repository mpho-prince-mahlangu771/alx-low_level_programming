#include "main.h"
/**
 * print_square - Prints a square followed by newline
 * @size: Size of a square
 * Description: Uses the character # to print a square
 * Return: A square if n>0, else a newline(\n)
 */
void print_square(int size)
{
	int i;
	int j;

	if ( size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
