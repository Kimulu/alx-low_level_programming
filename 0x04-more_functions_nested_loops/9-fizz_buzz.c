#include "main.h"
#include <stdio.h>
/**
* fizzBuzz- Prints Fizz or Buzz
* @size: The size of the output.
*/
void fizzBuzz(int size)
{
int i = 0;
for (i = 0; i <= size; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz")
}
else if (i % 3 == 0)
{
printf("Fizz")
}
else if (i % 5 == 0)
{
printf("Buzz")
}
else
{
_putchar(i + '0');
}
}
}
/**
 * main - check the code
 * Return: Always 0.
 */
int main(void)
{
fizzBuzz(100);
return (0);
}
