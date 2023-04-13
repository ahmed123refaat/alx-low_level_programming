#include <stdlib.h>
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
unsigned int i, j, len1, len2;
while (s1 && s1[len1])
len1++;
while (s2 && s2[len2])
len2++;
if (n < s2)
x = malloc(sizeof(char) * (len1 + n + 1));
else
x = malloc(sizeof(char) * (len1 + len2 + 1));
if (!x)
return (NULL);
while (i < len1)
{
x[i] = s1[i];
i++;
}
while (n < len2 && i < (len1 + n))
x[i++] = s2[j++];
while (n >= len2 && i < (len1 + len2))
x[i++] = s2[j++];
x[i] = '\0';
return (x);
}
