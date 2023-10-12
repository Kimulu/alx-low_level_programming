#include <ctype.h>
#include "main.h"
/**
*print_numbers - Function for printing numbers 0 to 9
*Return: Has no return value
*/
void print_numbers(void)
{
int i = 0;
while (i <= 9)
{
putchar(i + '0');
i++;
}
}
