#include "main.h"
/**
 * print_most_numbers - print 0-9, but dosen't print 2 and 4
 * return: void
 */

void print_most_numbers(void)
{
	char i;

	for (i = 48; i <= 57; i++)
	{
		if (i == 50 || i == 52)
		{
			continue;
		}
		_putchar (i);
	}
	_putchar ('\n');
}
