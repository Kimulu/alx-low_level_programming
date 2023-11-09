#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Prints numbers, separated by a specified string.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;

	va_start(args, n);

	unsigned int i = 0;

	while (i < n)
	{
		printf("%d", va_arg(args, int));

		if (separator != NULL && i < n - 1)
			printf("%s", separator);

		++i;
	}

	va_end(args);

	printf("\n");
}

