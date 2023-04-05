#include "main.h"


/**
 * _strlen_recursion - Returns the length of the string.
 * @s: the variable of string to be measured.
 *
 * Return: The length of the string.
 */

int _strlen_recursion(char *s)
{
	int strlen = 0;

	if (*s)
	{
		strlen++;
		strlen = strlen + _strlen_recursion(s + 1);
	}
	return (strlen);
}
