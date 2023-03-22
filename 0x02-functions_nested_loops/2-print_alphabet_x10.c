#include "main.h"
/**
  * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
  * followed by a new line
*/
void print_alphabet_x10(void)
{
char c = 'a';
int i = 0, j = 0;
while (i < 10)
{
while (j < 26)
{
_putchar (c + j);
j++;
}
i++;
j = 0;
_putchar ('\n');
}
}
