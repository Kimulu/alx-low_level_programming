#include "main.h"
/**
*_pow_recursion - function for powering a number
*@x: the number
*@y: the number to be raised to
*Return: returns an int with the solution to the power function
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}
return (x * _pow_recursion(x, y - 1));
}
