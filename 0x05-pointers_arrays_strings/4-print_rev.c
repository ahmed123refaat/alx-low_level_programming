#include "main.h"
/**
* print_rev - imprime en reversa
* @s: string
* return: 0
*/
void print_rev(char *s)
{
while (*s != '\0)
{
*s++;
_putchar(*s--);
}
_putchar('\n');
}
