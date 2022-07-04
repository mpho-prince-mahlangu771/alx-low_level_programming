#include <stdio.h>
/**
 * main -Enry point
 *
 * Description: prints all # of base 16 in lowercase
 * thus 0,1,2,...9,A,B,..F
 * Return: Always 0 (success)
 */
int main(void)
{
	char lower_base16;

	for (lower_base16 = 48; lower_base16 < 58; lower_base16++)
		putchar(lower_base16);
	for (lower_base16 = 'a'; lower_base16 <= 'f'; lower_base16++)
		putchar(lower_base16);
	putchar('\n');
	return (0);
}
