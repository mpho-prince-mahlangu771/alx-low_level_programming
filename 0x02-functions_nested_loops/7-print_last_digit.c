/**
 * print_last_digit: - prints the last digit of a number
 *@n: input from 7-main.c
 * Return: last digit of a n
 */
int print_last_digit(int n)
{

	last_digit = n % 1;
	if (last_digit < 0)
		last_digit = (-1 * last_digit);
	_putchar(last_digit + '0');
	return (last_digit);
}
