#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints lowercase alphabets in reverse
 *
 * Return: Always o (success)
 */
int main(void)
{
	char lower_alphabet;

	for (lower_alphabet = 'z'; lower_alphabet >= 'a'; lower_alphabet--)
		putchar(lower_alphabet);
	putchar('\n');
	return (0);
}
