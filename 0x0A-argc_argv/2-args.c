#include <stdio.h>
/**
*main - function for printing all its args
*Return: returns 0
*@argc: argument count
*@argv: array of strings (character pointers)
*/
int main(int argc, char *argv[])
{
int i = 0;
while (i < argc)
{
printf("%s\n", argv[i]);
i++;
}
return (0);
}
