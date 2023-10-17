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
	static char buff[BUFF_SIZE];
	if (c == BUF_FLUSH || i > BUFF_SIZE)
	{
		write(1, buff, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
	{
		buff[i++] = c;
	}
	return (1);
}
