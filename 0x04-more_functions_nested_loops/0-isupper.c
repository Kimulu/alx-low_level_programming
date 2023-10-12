#include <ctype.h>
#include "main.h"
/**
* _isupper - function for checking if the character is upper
* @c: The character to be passed through the function
* Return: returns 1 if the character is upper and 0 other wise
*/
int _isupper(int c)
{
if (isupper(c))
{
return (1);
}
else
{
return (0);
}
}
