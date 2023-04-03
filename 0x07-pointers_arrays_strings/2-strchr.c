#include "main.h"
/**
* _strchr - Entry point
* @s: input
* @c: input
* Return: Always 0 (Success)
*/
char *_strchr(char *s, char c)
{
int i ;
for ( i = 'a'; i <= 'z'; i++)
{
s[i] = c;
c++;
}
return (s);
}
