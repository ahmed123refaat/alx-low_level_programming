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
while (str[i] != '\0')
{
counter++;
}
for (i = 0 ; i <= counter ; i++)
{
if (i % 2 == 1 || i % 2 == 0)
{
i = ((counter + 1) / 2);
i = (counter) / 2;
_putchar(str[i]);
}
}
_putchar('\n');
}
