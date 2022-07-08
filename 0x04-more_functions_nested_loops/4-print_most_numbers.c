#include "main.h"
/**
 * print_most_numbers - Prints numbers from 0-9 
 * Description: Prints all number from 0 to 9 exept for numbers 2 and 4
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

			
