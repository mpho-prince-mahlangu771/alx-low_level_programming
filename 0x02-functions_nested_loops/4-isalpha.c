/**
 * int _isalpha - Checks if c is alphabet
 *
 * Description: This function accepts input and perform
 * checks to determine if the input is an alphabet or not
 *
 * Return: 1 if is alphabet and 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
