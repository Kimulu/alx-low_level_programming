#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - Check if a string consists of digits.
 * @str: The input string.
 *
 * Return: 1 if the string consists of digits, 0 otherwise.
 */
int _isdigit(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

/**
 * _strlen - Compute the length of a string.
 * @str: The input string.
 *
 * Return: The length of the string.
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

/**
 * _mul - Multiply two strings representing positive numbers.
 * @num1: The first number as a string.
 * @num2: The second number as a string.
 *
 * Return: The result of the multiplication as a string.
 */
char *_mul(char *num1, char *num2)
{
	int len1 = _strlen(num1);
	int len2 = _strlen(num2);
	int len_result = len1 + len2;
	char *result = malloc(len_result + 1);
	int i, j, carry, temp;

	if (result == NULL)
		return (NULL);

	for (i = 0; i < len_result; i++)
		result[i] = '0';
	result[len_result] = '\0';

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			temp = (num1[i] - '0') * (num2[j] - '0') + (result[i + j + 1] - '0') + carry;
			result[i + j + 1] = (temp % 10) + '0';
			carry = temp / 10;
		}
		result[i + j + 1] = (result[i + j + 1] - '0') + carry + '0';
	}
	return (result);
}

int main(int argc, char *argv[])
{
	if (argc != 3 || !_isdigit(argv[1]) || !_isdigit(argv[2]))
	{
		printf("Error\n");
		return (98);
	}
	char *result = _mul(argv[1], argv[2]);
	if (result == NULL)
	{
		printf("Error\n");
		return (98);
	}
	while (*result == '0' && *(result + 1) != '\0')
		result++;
	printf("%s\n", result);
	free(result);
	return (0);
}

