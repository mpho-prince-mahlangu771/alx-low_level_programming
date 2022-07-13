#include "main.h"
/**
 * reverse_array - Reverses the contents of an integer array
 * @a: array
 * @n: Number of elements of the array
 * Return: void
 */
void reverse_array(char *a, int n)
{
	int i;
	int tmp;

	for (i = 0; i < n; i++)
	{
		tmp =a[i];
		a[i] = a[n];
		a[n] = tmp;
	}
}
