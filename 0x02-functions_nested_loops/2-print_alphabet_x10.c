#include "main.h"
/**
 * Description: prints the alphabet in lowercase 10 times
 *
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

