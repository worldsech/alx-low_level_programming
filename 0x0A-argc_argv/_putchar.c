#include "main.h"
#include <unistd.h>

/**
 * _putchar - wrties the character c to the stdout
 * @c: character to print
 * Return: 1 on success and -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
