#include "main.h"
/**
 * print_most_numbers - Prints numbers from 0-9 excluding 2 and 4
 * Description: Uses ASCII characters to represent numbers
 * Return: void
 */
void print_most_numbers(void)
{
	char i;

	for (i = 48; i < 58; i++)
	{
		if ((i == 50) || (i == 52))
			continue;
		else
			_putchar(i);
	}
	_putchar('\n');
}

			
