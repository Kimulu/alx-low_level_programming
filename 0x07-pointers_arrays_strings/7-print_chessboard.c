#include <stdio.h>
#include "main.h"
/**
*print_chessboard - function prints a chess board
*@a: 2d array that has the chess numbers
*/
void print_chessboard(char (*a)[8])
{
int i = 0;
while (i < 8)
{
int j = 0;
while (j < 8)
{
_putchar(a[i][j]);
j++;
}
_putchar('\n');
i++;
}
}
