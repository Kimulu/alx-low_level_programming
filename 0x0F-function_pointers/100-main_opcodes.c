#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print opcodes of its own main function
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 * Return: (0) on success
 */
int main(int argc, char *argv[])
{
	int bytes, i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	unsigned char *opcode = (unsigned char *)main;

	for (i = 0; i < bytes; i++)
	{
		printf("%02x", opcode[i]);
		if (i < bytes - 1)
			printf(" ");
	}
	printf("\n");

	return (0);
}
