#include "main.h"
/**
 * main -checks the the code: 7-puts_half.c
 * 
 * Return: Always 0
 */
int main(void)
{
	char *str;
	str = "0123456789";
	puts_half(str);
	str = "I cut the string in half";
	puts_half(str);
	return (0);
}
