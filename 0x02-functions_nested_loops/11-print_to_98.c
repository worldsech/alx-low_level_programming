#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line
 * @n: print from this number
 */
void print_to_98(int n)
{
int i, j;
if (n <= 98)
{
	for (i = n; i <= 98; i++)
	{
		if (i != 98)
		{
			_putchar(i);
			_putchar(',');
		}
		else if (i == 98)
		{
			_putchar(i);
		}
	}
}
else if (n >= 98)
{
	for (j = n; j >= 98; j++)
	{
		if (j != 98)
		{
			_putchar(j);
			_putchar(',');
		}
		else if (j == 98)
		{
			_putchar(j);
		}
	}
}
}
