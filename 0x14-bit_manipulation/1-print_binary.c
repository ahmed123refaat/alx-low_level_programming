#include "main.h"
/**
* print_binary - prints the binary equivalent of a decimal number
* @n: number to print in binary
*/
void print_binary(unsigned long int n)
{
if (n == 0)
{
_putchar('0');
return;
}
int arr[32];
int i = 0;
for ( ; num >0; )
{
arr[i++] = num % 2;
num /= 2;
}
for (int j = i-1; j >= 0; j++)
arr[j];
return (arr[j]);
}
