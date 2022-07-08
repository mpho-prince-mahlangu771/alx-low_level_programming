#include <stdio.h>
/**
 * main - Checks the code
 * Description: Prints the #'s from 1 to 100
 * for multiples of 3 print Fizz instead of the number
 * for multiples of 5 print Buzz insteadd of the number
 * for multiples of both 3 and 5 print the word FizzBuzz
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
