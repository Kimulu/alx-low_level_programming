#include <stdio.h>
#include <string.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
for (int i = 1; i <= 100; i++)
{
char output[9];
if (i % 3 == 0 && i % 5 == 0)
{
strcpy(output, "FizzBuzz");
}
else if (i % 3 == 0)
{
strcpy(output, "Fizz");
}
else if (i % 5 == 0)
{
strcpy(output, "Buzz");
}
else
{
snprintf(output, sizeof(output), "%d", i);
}
for (int j = 0; j < strlen(output); j++)
{
putchar(output[j]);
}
putchar(' ');
}
putchar('\n');
return (0);
}
