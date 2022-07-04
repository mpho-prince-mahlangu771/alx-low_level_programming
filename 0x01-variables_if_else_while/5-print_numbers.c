#include <stdio.h>
/**
 * main -Entry point
 *
 * Description: prints all single digit # starting at 0
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		printf("%d", i);
	printf("\n");
	return (0);
}
