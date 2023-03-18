#include <stdio.h>
/**
*main - Entry point
*Description: 'numbers of base 10 starting from 0, followed by a new line.'
*Return: always 0
*/
int main(void)
{
int n = 0;
while (n <= 9)
{
putchar(n + 48);
n++;
}
putchar('\n');
return (0);
}
