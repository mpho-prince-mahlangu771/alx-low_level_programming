#include <stdio.h>
#include "main.h"
/**
  * main - Check the code
  *
  *Return: Always 0 (success)
  */
int main(void)
{
	int n;

	n = 420;
	printf("Initial value of n=%d", n);
	reset_to_98(&n);
	printf("\n updated values of n =%d\n", n);
	return (0);
}
