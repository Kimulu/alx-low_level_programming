#include <stdio.h>
#include "main.h"
/**
* printStr - Description of the function.
*
* @str: Description of the first parameter.
*/
void printStr(const char *str)
{
int i = 0;
while (str[i] != '\0')
{
putchar(str[i]);
i++;
}
}
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
const char *myString = "_putchar";
printStr(myString);
putchar('\n');
return (0);
}
