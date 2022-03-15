#include "holberton.h"
/**
 * print_times_table - print the times table for n.
 * Return: Nothing.
 */
void print_times_table(int n)
{
int i, j, res;

if (!(n > 15 || n < 0))
{
for (i = 0; i <= n; i++)
{
res = (i * j);
if (j != 0)
{
_putchar(',');
_putchar(' ');
}
if (res < 10 && j != 0)
{
_putchar(' ');
_putchar(' ');
_putchar((res % 10) + '0');
}
else if (res >= 10 && res < 100)
{
_putchar(' ');
_putchar((res /10) + '0');
_putchar((res % 10) + '0');
}
else
_putchar('\n');
}
}
}
