#include "main.h"
/**
* rev_string - Reverses a string
* @s: Input string
* Return: String in reverse
*/
void rev_string(char *s)
{
char s[0];
int counter = 0;
int i;
while (s[counter] !== '\0')
{
counter++;
}
for (i = counter; i >0; i--)
{
counter--;
s[i]=s[counter];
rev = s[i];
}
}
