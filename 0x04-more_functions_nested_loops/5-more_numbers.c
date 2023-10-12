#include <ctype.h>
#include "main.h"
/**
*more_numbers - Function for printing numbers 0 to 9
*Return: Has no return value
*/
void more_numbers(void)
{
int i = 0;
while (i < 10)
{
int j = 0;
while (j <= 14)
{
putchar(j + '0');
if (j < 14)
{
putchar(',');
putchar(' ');
}
else
{
putchar('\n');
}
j++;
}
i++;
}
}
