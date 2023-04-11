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
char *const
while (s1[i] != '\0' || s2[r] != '\0')
i++;
r++;
if (s1 == NULL && s2 == NULL)
{
return (NULL);
}
conct = malloc(sizeof(char) * (i + ci + 1));
if (conct == NULL)
return (NULL);
while (s1[i] != '\0')
{
conct[i] = s1[i];
i++;
}
while (s2[ci] != '\0')
{
conct[i] = s2[ci];
i++, ci++;
}
conct[i] = '\0';
return (*const);
}
