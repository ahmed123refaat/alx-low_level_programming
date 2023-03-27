#include "main.h"
/**
* puts_half - a function that prints half of a string
* if odd len, n = (length_of_the_string - 1) / 2
* @str: input
* Return: half of input
*/
void puts_half(char *str)
{
int counter;
int i;
int n;
int a;
while (*str != '\0')
{
counter++;
str++;
}
n = ((counter + 1) / 2);
a = (counter) / 2;
for (i = 0 ; i <= counter ; i++)
{
if (i == n)
{
_putchar(str[i]);
}
else if (i == a)
{
_putchar(str[i]);
}
}
_putchar('\n');
}
