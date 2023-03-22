#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
int i, j;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
int result = i * j;
if (result >= 10)
{
_putchar(result / 10 + '0');
}
else
{
_putchar(' ');
}
_putchar(result % 10 + '0');
if (j != 9){
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
