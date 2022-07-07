#include "main.h"
/**
 * print_most_numbers - Prints numbers from 0-9 but excludes #'s 2 and 4
 * Return: Numbers
 */
void print_most_numbers(void)
{
	char i;

	for ( i = 48; i < 58; i++)
	{
		if ((i == 50) || (i == 52))
			continue;
		else
			_putchar(i);
	}
	_putchar('\n');
}

			
