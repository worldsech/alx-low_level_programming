#include "main.h"


/**
 * _puts_recursion -funtion link put():
 * @s: input of string
 * return: 0
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
