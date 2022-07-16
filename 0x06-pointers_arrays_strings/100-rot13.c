#include "main.h"
/**
 *rot13 - Encodes a string using rot13
 * @str: String input
 * Return: encoded string
 */
char *rot13(char *str)
{
	int i;
	int x;
	int r;
	char swap[] = {'A', 'N', 'a', 'n', 'B', 'O', 'b', 'o', 'C', 'P', 'c',
		'p', 'D', 'Q', 'd', 'q', 'E', 'R', 'e', 'r', 'F', 'S', 'f', 
		's', 'G', 'T', 'g', 't', 'H', 'U', 'h', 'u', 'I', 'V', 'i',
		'v', 'J', 'W', 'j', 'w', 'K', 'X', 'k', 'x', 'L', 'Y', 'l',
		'y', 'M', 'Z', 'm', 'z'};

	i = 0;
	r = 13;
	while(str[i] != '\0')
	{
		for (x = 0; x <= 51; x++)
		{
			if (str[i] == swap[x])
			{
				str[i] = str[i] + r;
				x = 51;
			}
		}
		i++;
	}
	return (str);
}
