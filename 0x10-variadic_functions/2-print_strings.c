#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Prints strings, separated by a specified string.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 *
 * Description: This function takes a separator string and a variable number
 * of strings. It prints each string, separated by the provided separator
 * (if it's not NULL), and prints (nil) for any NULL strings. It adds a newline at the end.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
        const char *current_str;

	va_list args;

	va_start(args, n);
	
	i = 0;

	while (i < n)
	{
		current_str = va_arg(args, const char *);

		if (current_str != NULL)
			printf("%s", current_str);
		else
			printf("(nil)");

		if (separator != NULL && i < n - 1)
			printf("%s", separator);

		++i;
	}

	va_end(args);

	printf("\n");
}

