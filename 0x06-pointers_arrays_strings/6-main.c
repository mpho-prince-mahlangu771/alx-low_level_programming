#include <stdio.h>
#include "main.h"
/**
 * main - checks the code
 * 
 *Return: Always 0
 */
int main(void)
{
	char str[] = "Expect the best. Prepare for the worst.Capitalize on whats"
		"to come\nand use\nyour gains wisely\n1234!";
	char *ptr;

	ptr = cap_string(str);
	printf("%s", ptr);
	printf("%s", str);
	return (0);
}
