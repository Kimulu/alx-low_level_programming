#include <stdio.h>

/**
 * print_all - Prints anything based on the given format.
 * @format: A list of types of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char *str;
	int num;
	double d;
	va_list args;

	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == 'c')
			printf("%c", va_arg(args, int));
		else if (format[i] == 'i')
			printf("%d", va_arg(args, int));
		else if (format[i] == 'f')
			printf("%f", va_arg(args, double));
		else if (format[i] == 's')
		{
			str = va_arg(args, char *);
			printf("%s", str == NULL ? "(nil)" : str);
		}
		if ((format[i + 1] != '\0') && (format[i] == 'c' || format[i] == 'i' ||
			format[i] == 'f' || format[i] == 's'))
		{
			printf(", ");
		}
		++i;
	}

	va_end(args);
	printf("\n");
}
