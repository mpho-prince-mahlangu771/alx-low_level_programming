#include <stdio.h>
/**
 * print_to_98 - Prints all natural #'s from n to 98
 * @n: n is a natural number 
 * Return: Natural numbers
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}


