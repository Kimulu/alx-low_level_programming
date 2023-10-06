#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
char latestChar = 'a';
while (latestChar <= 'z')
{
if (latestChar != 'q' && latestChar != 'e')
{
putchar(latestChar);
}
latestChar++;
}
putchar('\n');
return (0);
}
