#include "main.h"
/**
 * main -Checks the code
 *
 * Return: Always 0
 */
int main(void)
{
	char c;

       	_putchar('A');
	_putchar(':');
	c = _isupper('A');
	_putchar(c + '0');
	_putchar('\n');
	_putchar('a');
	_putchar(':');
	c = _isupper('a');
	_putchar(c + '0');
	_putchar('\n');
	_putchar(']');
	_putchar(':');
	c = _isupper(']');
	_putchar(c + '0');
	_putchar('\n');
	return (0);
}

