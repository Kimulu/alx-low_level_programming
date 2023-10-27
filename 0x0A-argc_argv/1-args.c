#include <stdio.h>
/**
*main - function for printing number of args
*Return: returns 0
*@argc: argument count
*@argv: array of strings (character pointers)
*/
int main(int argc, char *argv[])
{
(void)argv;
printf("%d\n", argc - 1);
return (0);
}
