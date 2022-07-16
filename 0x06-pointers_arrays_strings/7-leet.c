#include "main.h"
/**
 * leet - Encodes a string into 1337
 * @str: Input string
 * Description: replaces letter a and A with 4, letter e and E with 3
 * replaces letter o and O with 0, letter t and T with 7,
 * letter l and L with 1
 * Return: An encode string
 */
char *leet(char *str)
{
	int i;
	int x;
	int find[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int replac[] = {'4', '3', '0', '7', '1'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (x = 0; x <= 9; x++)
		{
			if (str[i] == find[x])
			{
				str[i] = replac[x / 2];
				x = 9;
			}
		}
	}
	return (str);
}
