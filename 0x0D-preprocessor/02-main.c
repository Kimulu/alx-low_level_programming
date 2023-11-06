#include "main.h"
#include <unistd.h>
/**
*_putchar - function for printing
*@c: the char
*Return: int
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
/**
*main - function
*Return: int
*/
int main(void)
{
const char file_name[] = __FILE__;
const char *ptr = file_name;
while (*ptr)
{
_putchar(*ptr);
ptr++;
}
_putchar('\n');
return (0);
}
