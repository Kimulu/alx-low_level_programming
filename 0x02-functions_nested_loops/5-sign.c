#include <stdio.h>
#include "main.h"
/**
* print_sign - Returns 1 if the character is upper case else it returns 0.
* Return: 1 if positive -1 if negative other wise 0.
* @n: The character to be evaluated
*/
int print_sign(int n)
{
int num = 0;
char v = 'm';
if (n > 0)
{
v = '+';
num = 1;
}
else if (n < 0)
{
v = '-';
num = 0;
}
else
{
v = '0';
num = -1;
}
putchar(v);
return (num);
}
