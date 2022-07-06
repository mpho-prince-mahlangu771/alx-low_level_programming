#include "main.h"
/**
 * int _isalpha - My custom made alphabet checker similar to man isalpha()
 * @c: c is the character that the function accepts and check
 *
 * Description: Checks if a given input is lower/uppercase alphabet or not
 *
 * Return: 1 if is alphabet and 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
