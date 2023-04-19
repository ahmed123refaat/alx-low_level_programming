#include "function_pointers.h"
/**
 * int_index - return index place if comparison = true, else -1
 * @array: array
 * @size: size of elements in array
 * @cmp: pointer to func of one of the 3 in main
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
unsigned int i;
for (i = 0; i < size; i++)
{
if (array[i] >= 0 && array[i] <=9 )
{
return true;
}
else
{
return -1;
}
cmp(array[i];
}
}
