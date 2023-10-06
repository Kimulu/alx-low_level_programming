#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
char currentChar = '0';
while (currentChar <= 'f')
{
putchar(currentChar);
if (currentChar == '9')
{
currentChar = 'a';
}
else if
(currentChar == 'f')
{
break;
}
else
{
currentChar++;
}
}
putchar('\n');
return (0);
}
