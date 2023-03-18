#include <stdio.h>
/**
*main - Entry point
*Description: 'lower case and upper case alphabet'
*Return: always 0
*/
int main(void)
{
int n = 97;
int m = 65;
while (n <= 122)
{
putchar(n);
n++;
}
while (m <= 90)
{
putchar(m);
m++;
}
putchar('\n');
return (0);
}
