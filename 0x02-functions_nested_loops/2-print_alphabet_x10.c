#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - Prints a string of all alphabet letters ten times.
 */
void print_alphabet_x10(void)
{
char letter = 'a';
int number = 0;
while (number < 11)
{
while (letter <= 'z')
{
putchar(letter);
letter++;
}
putchar('\n');
number++;
}
}
