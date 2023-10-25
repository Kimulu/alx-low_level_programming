#include "main.h"
/**
*factorial- function for finding the factorial of a number
*@n: the number
*Return: returns an int with the solution to the factorial
*/
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (1);
}
return (n * factorial(n - 1));
}
