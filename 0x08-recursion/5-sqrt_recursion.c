#include "main.h"
/**
*_sqrt_recursion- function for calling the sqrt function
*@n: the number
*Return: returns an int with the solution to the power function
*/
int _sqrt_recursion(int n)
{
return (find_sqrt(n, n / 2));
}
/**
*find_sqrt - function for finding the sqrt of n
*@n: the number
*@guess: the number the program will guess and try to work from there
*Return: returns an int with the solution to the power function
*/
int find_sqrt(int n, int guess)
{
if (n < 0)
{
return (-1);
}
if (n == 0 || n == 1)
{
return (n);
}
if (guess * guess == n)
{
return (guess);
}
if (guess == 0)
{
return (-1);
}
return (find_sqrt(n, (guess + n / guess) / 2));
}
