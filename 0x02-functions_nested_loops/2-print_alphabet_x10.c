#include "main.h"
/**
 * print_alphabet_x10 - Called in 2-main.c
 *
 * Description: prints the alphabet in lowercase 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char lower_alphabet;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (lower_alphabet = 'a'; lower_alphabet <= 'z'; lower_alphabet++)
			_putchar(lower_alphabet);
		_putchar('\n');
	}	
}
