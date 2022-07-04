#include <stdio.h>
/**
 * main -Entry point
 *
 * Description: prints the alphabet in lowercase, and then in uppercase
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char lower_alphabet;
	char upper_alphabet;

	for (lower_alphabet = 'a'; lower_alphabet <= 'z'; lower_alphabet++)
		putchar(lower_alphabet);
	for (upper_alphabet = 'A'; upper_alphabet <= 'Z'; upper_alphabet++)
		putchar(upper_alphabet);
	putchar('\n');
	return (0);
}
