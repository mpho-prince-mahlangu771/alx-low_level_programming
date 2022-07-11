#include "main.h"
/**
 * swap_int - Swaps values of two integers
 * @a: Pointer variable pointing to address of int a
 * @b: Pointer variable pointing to address of int b
 * Description: Swaps int a and b using pointers a and b containing address
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = 98;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

