#include <stdio.h>
#include "main.h"
/**
* printStr - Description of the function.
*
* @str: Description of the first parameter.
*/
void printStr(const char *str)
{
for (int i = 0; str[i] != '\0'; i++)
{
putchar(str[i]);
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
return (0);
}
