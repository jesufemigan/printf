#include <unistd.h>

/**
 * _putchar - write to standard output
 *
 * @c: character
 *
 * Return: 1 on success, 0 on failure
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
