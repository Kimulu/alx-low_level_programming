#include <ctype.h>
#include "main.h"
/**
*print_line - Function for printing aa line with the length set to n
*@n: The number to use when printing a line
*Return: Has no return value
*/
void print_line(int n)
{
if (n > 0)
{
int i = 0;
while (i < n)
{
putchar('_');
i++;
}
}
}
