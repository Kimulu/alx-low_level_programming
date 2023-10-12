#include <ctype.h>
#include "main.h"
/**
*_isdigit - Function for checking if the character is a digit
*@c: The character to be checked
*Return: returns 1 if digit and 0 other wise
*/
int _isdigit(int c)
{
if (isdigit(c))
{
return (1);
}
else
{
return (0);
}
}
