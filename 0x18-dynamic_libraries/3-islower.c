#include <ctype.h>
#include <stdio.h>
#include "main.h"
/**
* _islower - Returns 1 if the character is lower case else it returns 0.
* Return: 0 for upper case and 1 for lower case
* @c: The character to be evaluated
*/
int _islower(int c)
{
if (islower(c))
{
return (1);
}
else
{
return (0);
}
}
