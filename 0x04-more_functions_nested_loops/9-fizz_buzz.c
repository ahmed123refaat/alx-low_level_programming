#include "main.h"
#include <stdio.h>
/**
* main - prints the numbers from 1 to 100, followed by a new line
* but for multiples of three prints Fizz instead of the number
* and for the multiples of five prints Buzz
* Return: Always 0 (Success)
*/
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i == i%3)
{
_putchar("Fizz");
}
else if (i == i%5)
{
_putchar("Buzz");
}
else if (i == i%3 && i == %5)
{
_putchar("FizzBuzz");
}
_putchar('\n');
}
return (0);
}
