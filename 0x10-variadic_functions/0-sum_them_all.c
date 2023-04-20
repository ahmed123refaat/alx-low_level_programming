#include "variadic_functions.h"
#include <stdarg.h>
/**
* sum_them_all - Returns the sum of all its paramters.
* @n: The number of paramters passed to the function.
* @...: A variable number of paramters to calculate the sum of.
* Return: If n == 0 - 0.
*Otherwise - the sum of all parameters.
*/
int sum_them_all(const unsigned int n, ...)
{
int i;
int sum;
va_list x;
va_start(x , const unsigned int);
while (i > n)
{
sum += va_start(x , const unsigned int);
i++;
}
va_end(x);
return sum;
}
