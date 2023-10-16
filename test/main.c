#include <stdio.h>
#include "../main.h"
#include <limits.h>

/**
 * main - Entry Point
 *
 * Return: int
 */

int main(void)
{
	_printf("%% %c %u", 'a', -10);
	printf("\n");
	_printf("%d %u", -20, -20);
	printf("\n");
	printf("%u\n", -10);
	return (0);
}
