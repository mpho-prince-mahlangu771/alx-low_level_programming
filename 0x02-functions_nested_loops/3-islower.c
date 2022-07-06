/**
 * _islower - Checks for lowercase character
 * @c: Is a character provided in main.c
 * Return: Returns 1 if c is lowercase, 0 if not
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
