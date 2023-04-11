#include "main.h"
#include <stdlib.h>
/**
* str_concat - get ends of input and add together for size
* @s1: input one to concat
* @s2: input two to concat
* Return: concat of s1 and s2
*/
char *str_concat(char *s1, char *s2)
{
int i;
int r;
char *c;
char *z;
char *e;
while (s1[i] != '\0' || s2[r] != '\0')
i++;
r++;
if (s1 == NULL && s2 == NULL)
{
return (NULL);
}
*c = malloc(sizeof(s1) + 1);
*z = malloc(sizeof(s2) + 1);
*e = *c + *z;
return (e);
}
