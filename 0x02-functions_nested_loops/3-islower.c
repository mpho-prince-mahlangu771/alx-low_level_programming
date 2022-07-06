#include "main.h"
/**
 * int_islower - Called in main.c
 *
 * Description: checks whether int c is a lowercase character using ascii
 *
 * Return: 1 if c is lowercase, 0 if not
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
