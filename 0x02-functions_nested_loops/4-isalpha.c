#include "main.h"
/**
 * _isalpha - tests whether a character is from the English alphabet.
 * @c: character to be checked.
 * Return: Always 0.
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
