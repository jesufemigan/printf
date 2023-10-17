#include <unistd.h>
#include "main.h"

/**
 * _putchar - write to standard output
 *
 * @c: character
 *
 * Return: 1 on success, 0 on failure
 */

int _putchar(int c)
{
	static int i;
	static char buf[BUF_SIZE];
	if (c == BUF_FLUSH || i > BUF_SIZE)
	{
		write(1, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
	{
		buf[i++] = c;
	}
	return (1);
}
