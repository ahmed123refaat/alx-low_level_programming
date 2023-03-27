#include "main.h"
/**
* puts2 - function should print only one character out of two
* starting with the first one
* @str: input
* Return: print
*/
void puts2(char *str)
{
int counter = 0;
int i;
while (*str != '\0')
{
counter++;
str++;
}
for (i = 0 ; i <= counter ; i++)
{
if (i % 2 == 0)
{
_putchar(str[i]);
}
}
_putchar('\n');
}
