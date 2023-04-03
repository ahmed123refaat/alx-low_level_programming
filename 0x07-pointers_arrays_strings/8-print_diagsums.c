#include "main.h"
#include <stdio.h>
/**
* print_diagsums - Entry point
* @a: input
* @size: input
* Return: Always 0 (Success)
*/
void print_diagsums(int *a, int size)
{
int i;
int j;
int k;
int d;
int sum1;
int sum2;
for (i = 0; i <= size; i++)
{
for (j = 0; j <= size; j++)
sum1 = sum1 + a[i][j];
}
for (k = 0; k <= size; k++)
{       
for (d = 0; d <= size; d++)
sum2 = sum2 + a[k][d];
}
printf("%d, %d\n", sum1, sum2);
}
