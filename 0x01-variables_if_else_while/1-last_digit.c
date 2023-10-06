#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
int lastDigit = n % 10;
if (lastDigit == 0)
{
prinf("Last digit of %d is %d and is 0",n,lastDigit);
}
else if (lastDigit > 5)
{
printf("Last digit of %d is %d and is greater than 5 and not 0",n,lastDigit);
}
else if (lastDigit < 6)
{
printf("Last digit of %d is %d and is less that 6 and not 0",n,lastDigit);
}
	return (0);
