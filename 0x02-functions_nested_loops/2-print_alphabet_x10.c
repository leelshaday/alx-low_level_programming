#include "main.h"
/**
 * print_alphabet_x10 - repeats the print_alphabet 10 times.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
int a;
char c;

c = 0;
while (c < 10)
{
for (a = 'a' ; a <= 'z'; a++)
{
_putchar(a);
}

c++;
_putchar('\n');
}

}
