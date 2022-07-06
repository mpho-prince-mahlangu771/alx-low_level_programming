#include "main.h"
/**
 * print_alphabet - Starts executing here
 *
 * Description: prints the alphabet in lowercase using _putchar()
 *
 * Return: void
 */
void print_alphabet(void)
{
	char lower_alphabet;

	for (lower_alphabet = 'a'; lower_alphabet <= 'z'; lower_alphabet++)
		_putchar(lower_alphabet);
	_putchar('\n');
}
