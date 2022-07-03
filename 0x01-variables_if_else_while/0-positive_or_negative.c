#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point 
 * Description: prints if random # stored in n is +,-, or 0
 *
 * Return: Always 0 (sucess)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		printf("%d is negative\n", n);
	else if (n == 0)
		printf("%u is zero\n", n);
	else
		printf("%u is positive\n", n);
	return (0);
}
