#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints text according to number
 * Return: Alaways (Success)
 */
int main(void)
{
int n , lasted;
srand(time(0));
n = rand() - RAND_MAX / 2;
lasted = n % 15;
if (lasted > 5)
{
printf("the last digit of %d is %d and is greater than 5\n" , n , lasted);
}
else if (lasted == 0)
{
printf("the lasted digit of %d is %d and is greater than 5\n" , n , lasted);
}
else if (lasted < 6 && lasted != 0)
{
printf("the last digit of %d is %d and is and is less than 6 and not 0\n" , n , lasted);
}
return (0);
}
