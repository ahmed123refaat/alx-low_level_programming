#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* _strdup - duplicate to new memory space location
* @str: char
* Return: 0
*/
char *_strdup(char *str)
{
char *a;
int i;
if (str == NULL)
return (NULL);
int i = 0;
int r = 0
while (str[i] != '\0')
i++;
a = malloc(sizeof(char) * (i + 1);
if (aaa == NULL)
return (NULL);
for (r = 0; str[r]; r++)
aaa[r] = str[r];
return (aaa);
}
