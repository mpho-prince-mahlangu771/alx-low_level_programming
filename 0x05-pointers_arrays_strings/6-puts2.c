#include "main.h"
/**
 * puts2 - Prints every other character
 * @str: A character string
 * Description: It skips one character after every iteration
 * Return: void
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
