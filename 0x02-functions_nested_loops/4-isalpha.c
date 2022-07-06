/**
 * _isalpha - Checks if c is alphabet
 * @c: c is input
 * Return: Returns  1 if c is alphabet and 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
