#include <stdio.h>
/**
 * main - prints the lowercase alphabet in reverse
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
char alp[26] = "abcdefghijklmnoprqstuvwxyz";
int i;
for (i = 26 ; i > 0 ; i--)
{
putchar(alp[i]);
}
putchar('\n');
return (0);
}
