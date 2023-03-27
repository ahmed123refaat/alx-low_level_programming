#include "main.h"
/**
* print_rev - imprime en reversa
* @s: string
* return: 0
*/
void print_rev(char *s)
{
int i ,l;
while (*s != '\0')
{
l++;
s++;
}
for(i = l ;i > 0 ;i--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
