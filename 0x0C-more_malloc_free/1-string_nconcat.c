#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings up to n characters.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of characters from s2 to concatenate.
 * Return: A pointer to the newly allocated concatenated string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result, *r;
	unsigned int s1_len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[s1_len])
		s1_len++;

	n = (n >= (unsigned int)s2[0]) ? (unsigned int)s2[0] : n;

	result = (char *)malloc(s1_len + n + 1);

	if (result == NULL)
		return (NULL);

	r = result;

	while ((*r = *s1++))
		r++;

	while (n--)
		*r++ = *s2++;

	*r = '\0';

	return (result);
}
