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
if (argc != 3)
{
printf("Error\n");
return (1);
}
int num1 = atoi(argv[1]);
int num2 = atoi(argv[2]);
int result = num1 * num2;
printf("%d\n", result);
return (0);
}
