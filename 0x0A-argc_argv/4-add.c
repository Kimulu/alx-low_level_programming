#include <stdio.h>
#include <stdlib.h>
/**
*main - function for multiplying two numbers
*Return: returns 0
*@argc: argument count
*@argv: array of strings (character pointers)
*/
int main(int argc, char *argv[])
{
int i = 1;
int sum = 0;
char *endptr;
long num;
if (argc < 2)
{
printf("0\n");
return (0);
}
while (i < argc)
{
num = strtol(argv[i], &endptr, 10);
if (*endptr != '\0' || num <= 0)
{
printf("Error\n");
return (1);
}
sum += (int)num;
i++;
}
printf("%d\n", sum);
return (0);
}
