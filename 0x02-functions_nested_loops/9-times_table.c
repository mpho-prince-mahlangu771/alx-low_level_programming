#include "main.h"
/**
 * times_table - Prints the 9 times table,starting at 0
 * Return: time_table
 */
void times_table(void)
{
	int i;
	int j;
	int multiplication;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		for (j = 1; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');
			multiplication = i * j;
			if (multiplication <= 9)
				_putchar(' ');
			else
				_putchar((multiplication / 10) + '0');
			_putchar((multiplication % 10) + '0');
		}
		_putchar('\n');
	}
}
