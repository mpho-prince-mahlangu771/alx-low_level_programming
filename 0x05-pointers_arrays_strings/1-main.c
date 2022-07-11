#include "main.h"
#include <stdio.h>
/**
 * main -Checks the code
 *
 * Returns: Always 0
 */
int main(void)
{
	int a;
	int b;

	a = 98;
	b = 42;
	printf("Initial values of a=%d and b=%d \n", a, b);
	swap_int(&a, &b);
	printf("Values after swapping a=%d and b=%d \n ", a, b);
	return (0);
}
