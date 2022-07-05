#include <unistd.h>
/**
 * main -Entry point
 *
 * Description: 
 *
 * Return: on success 1
 * on error -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
