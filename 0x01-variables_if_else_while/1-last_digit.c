#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: outputs the last digit of a randomly assigned number
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	if (last_digit > 5)
		printf("Last digit of %d is %d and is greater than 5 \n", n, last_digit);
	else if (last_digit == 0)
		printf("Last digit of %d is %d and is zero \n", n, last_digit);
	else
		printf("Last digit of %d is %d and is less than 6 and not zero \n", n, last_digit);
	return (0);
}
