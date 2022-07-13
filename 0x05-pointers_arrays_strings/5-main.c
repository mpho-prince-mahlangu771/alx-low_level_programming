#include "main.h"
#include <stdio.h>
/**
 * main - checks the code: 5-rev_string.c
 * 
 * Return: Always 0
 */
int main(void)
{

	char s[10] = "My school";
	
	printf("string before reversing = %s \n", s);
	rev_string(s);
	printf("\n string in reverse =  %s \n", s);
	return (0);
}
