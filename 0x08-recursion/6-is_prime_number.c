#include "main.h"
/**
*is_prime_helper - function to be called to check if a number is prime
*@n: the number
*@divisor: the number to be used to check if n is a prime number
*Return: returns a 1 if prime and 0 otherwise
*/
int is_prime_helper(int n, int divisor)
{
if (n <= 1)
{
return (0);
}
if (divisor == 1)
{
return (1);
}
if (n % divisor == 0)
{
return (0);
}
return (is_prime_helper(n, divisor - 1));
}
/**
*is_prime_number - function to call the prime helper
*@n: the number
*Return: returns the result of the helper
*/
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
return (is_prime_helper(n, n - 1));
}
