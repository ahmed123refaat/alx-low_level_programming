#include<stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - prints the alphabet without q and e.
 * Return: Always 0 (Success)
 */
int main(void)
{
char alp[26] = "abcdefghijklmnoprqstuvwxyz";
int i;
for (i = 0; i < 26; i++)
{
if (i != 4 && i != 17)
{
putchar(alp[i]);
}
putchar('\n');
}
return (0);
}
