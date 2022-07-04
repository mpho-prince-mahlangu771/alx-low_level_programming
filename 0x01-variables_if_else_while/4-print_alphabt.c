#include <stdio.h>
/**
 * main -Entry point
 *
 * Description: prints lowercase alphabets excepts for q and e
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char lower_alphabet;

	for (lower_alphabet = 'a'; lower_alphabet <= 'z'; lower_alphabet++)
		if ((lower_alphabet == 'e') || (lower_alphabet == 'q'))
			continue;
		else
			putchar(lower_alphabet);
	putchar('\n');
	return (0);
}
