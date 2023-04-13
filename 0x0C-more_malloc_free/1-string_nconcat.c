#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
* *string_nconcat - concatenates n bytes of a string to another string
* @s1: string to append to
* @s2: string to concatenate from
* @n: number of bytes from s2 to concatenate to s1
* Return: pointer to the resulting string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *x;
unsigned int i, j;
if (n < s2)
{
x = malloc(strlen(s1 + 1) + n);
}
else
{
x = malloc(strlen(s1 + 1) + strlen(s2 + 1) + n);
}
if (x == NULL)
{
return (NULL);
}
return (x);
