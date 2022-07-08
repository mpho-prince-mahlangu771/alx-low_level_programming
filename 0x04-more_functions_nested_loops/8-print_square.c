#include "main.h"
/**
 * print_square - Prints a square
 * @size: The size of the square
 * Description: Uses a # character to print square
 * Return: A square if size is greater 0 else a newline(\n)
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
