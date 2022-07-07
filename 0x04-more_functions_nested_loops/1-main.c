#include "main.h"
/**
 * main - Check the code
 *
 * Return: Always 0
 */
int main(void)
{
	char c;

	_putchar('0');
	_putchar(':');
	_putchar(' ');
	c = _isdigit('0');
	_putchar(c + '0');
	_putchar('\n');
	_putchar('a');
	_putchar(':');
	_putchar(' ');
	c = _isdigit('a');
	_putchar(c + '0');
	_putchar('\n');
	return (0);
}

