#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/*
* _atoi - converts a string to an integer
* @s: string to be converted
* Return: the int converted from the string
*/
int _atoi(char *s)
{
while (*s != '\0')
s++;
if (s % 2 == 0)
{
s *= s;
}
if (s % 2 != 0)
{
s *= s;
}
if (argc < 3 || argc > 3)
{
printf("Error\n");
return (1);
}
}
return atoi(s);
}
