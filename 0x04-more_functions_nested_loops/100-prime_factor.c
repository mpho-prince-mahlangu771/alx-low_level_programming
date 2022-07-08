#include <stdio.h>
/**
 * main - Checks the code
 * Description: Finds and prints the largest prime factor of num 
 * Return: Always 0
 */
int main(void)
{
	unsigned  long i;
	unsigned  long num = 612852475143L;

	for (i = 2L; i < num; i++)
	{
		while (num % i == 0)
			num /= i;
	}
	printf("%lu \n", num);
	return (0);
}

