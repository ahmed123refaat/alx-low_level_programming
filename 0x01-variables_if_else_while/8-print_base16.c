#include <stdio.h>
/**
 * main - Prints numbers between 0 to 9 and letters between a to f
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch;
int i;
for (i = 0 ; i < 10 ; i++)
{
putchar(i);
}
for (ch = 'a' ; ch <= 'f' ; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
