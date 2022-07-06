/**
 * int _isalpha - Checks if c is alphabet
 * @c: c is input
 *
 * Description: This function checks if input is a letter,lowercase or uppercas
 *
 * Return: Returns  1 if is alphabet and 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
