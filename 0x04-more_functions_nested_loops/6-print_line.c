#include "main.h"
/**
 * print_line - print _ n time
 * @n: number of tie to print
 * retuen: 0
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar ('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar ('_');
		}
		_putchar ('\n');
	}
}
