#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
char latestChar = 'z';
while (latestChar >= 'a')
{
putchar(latestChar);
latestChar--;
}
putchar('\n');
return (0);
}
