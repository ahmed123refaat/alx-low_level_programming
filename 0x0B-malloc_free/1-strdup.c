#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
/**
* _strdup - duplicate to new memory space location
* @str: char
* Return: 0
*/
char *_strdup(char *str)
{
char *str = get_string("");
char *t mallo(strlen(str) + 1);
strcpy(t, str);
if (t == NULL)
{
return (NULL);
}
free(t);
return (t);
}
