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
char *s;
while (*s != '\0')
{
counter = counter + 2;
s++;
_putchar(s[counter]);
}
}
