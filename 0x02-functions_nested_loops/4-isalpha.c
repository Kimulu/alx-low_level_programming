#include <ctype.h>
#include <stdio.h>
#include "main.h"
/**
 * _isalpha - Returns 1 if the character is upper case else it returns 0.
 * @c: The character being evaluated.
 * Return: 1 if upper case otherwise 0
 */
int _isalpha(int c)
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
