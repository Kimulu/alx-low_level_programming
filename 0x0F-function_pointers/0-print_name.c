#include "function_pointers.h"
#include <unistd.h>
/**
*print_name - function to print a name
*@name: pointer to the name
*@f: pointer to function
*Return:  none
*/
void print_name(char *name, void (*f)(char *))
{
f(name);
}
/**
*_putchar - function for printing characters
*@c: the character
*Return: int
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
