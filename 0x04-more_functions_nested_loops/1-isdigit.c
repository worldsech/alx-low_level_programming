#include "main.h"
/**
 * _isdigit - checks for digites
 * @c: the character to be checked
 * Return: 1 if c is a letter, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
