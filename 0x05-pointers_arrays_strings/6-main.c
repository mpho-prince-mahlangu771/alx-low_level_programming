#include "main.h"
/**
 * main - checks the code in 6-puts2.c
 *
 * Return: Always 0
 */
int main(void)
{
	char *str;

	str = "01234567789";
	puts2(str);
	str = "I will skip one character per iteration.";
	puts2(str);
	return (0);
}
