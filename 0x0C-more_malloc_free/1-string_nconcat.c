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
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	unsigned int s1_len = 0;

	while (s1[s1_len])
		s1_len++;

	n = (n >= s2[0]) ? s2[0] : n;

	char *result = (char *)malloc(s1_len + n + 1);

	if (result == NULL)
		return (NULL);

	char *r = result;

	while ((*r = *s1++))
		r++;

	while (n--)
		*r++ = *s2++;

	*r = '\0';

	return (result);
}
