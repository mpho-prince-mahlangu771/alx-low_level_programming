#include "main.h"
#include <stdio.h>
/**
 * Return: Always 0
 */
int main(void)
{
	char s[] = "A random string without a will. Tame the world with code!";
	char *p;

	p = leet(s);
	printf("%s", p);
	printf("%s", s);
	return (0);
}
