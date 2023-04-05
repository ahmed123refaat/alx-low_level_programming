#include "main.h"
/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: The string to be printed.
 */
void _print_rev_recursion(char *s)
{
while (*s != '\0')
{
s++;
if (*s)
{
s--;
_putchar(*s);
}
}
}
