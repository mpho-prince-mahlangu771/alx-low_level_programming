/**
 * _isdigit - Checks if c is a digit(0-9)
 * @c: Input character
 * Description: Uses ASCII characters for digits(48-57)
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
