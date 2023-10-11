#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - Prints a string of all alphabet letters ten times.
 */
void print_alphabet_x10(void)
{
int number = 0;
while (number < 10)
{
char letter = 'a';
while (letter <= 'z')
{
putchar(letter);
letter++;
}
putchar('\n');
number++;
}
}
