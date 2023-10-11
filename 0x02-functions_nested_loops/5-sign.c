#include <stdio.h>
#include "main.h"
/**
* print_sign - Returns 1 if the character is upper case else it returns 0.
* Return: 1 if positive -1 if negative other wise 0.
* @n: The character to be evaluated
*/
int print_sign(int n)
{
if (n > 0)
{
putchar('+');
return (1);
}
else if (n == 0)
{
putchar('0');
return (0);
}
else
{
putchar('-');
return (-1);
}
}
