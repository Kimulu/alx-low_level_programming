#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUF_SIZE 1024

int open_source_file(const char *source_file);
int open_destination_file(const char *destination_file);
int copy_file(int source_fd, int destination_fd);

/**
 * main - Copies the content of a file to another file.
 * @argc: The number of arguments.
 * @argv: The array of arguments.
 *
 * Return: (0) on success, (97), (98), (99), or (100) on failure.
 */
int main(int argc, char *argv[])
{
	int source_fd, destination_fd, close_status;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}

	source_fd = open_source_file(argv[1]);
	if (source_fd == -1)
		return (98);

	destination_fd = open_destination_file(argv[2]);
	if (destination_fd == -1)
	{
		close(source_fd);
		return (99);
	}

	if (copy_file(source_fd, destination_fd) == -1)
	{
		close(source_fd);
		close(destination_fd);
		return (99);
	}

	close_status = close(source_fd);
	if (close_status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", source_fd);
		return (100);
	}

	close_status = close(destination_fd);
	if (close_status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", destination_fd);
		return (100);
	}

	return (0);
}

/**
 * open_source_file - Opens the source file.
 * @source_file: The name of the source file.
 *
 * Return: The file descriptor on success, (-1) on failure.
 */
int open_source_file(const char *source_file)
{
	int source_fd = open(source_file, O_RDONLY);

	if (source_fd == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", source_file);

	return (source_fd);
}

/**
 * open_destination_file - Opens the destination file.
 * @destination_file: The name of the destination file.
 *
 * Return: The file descriptor on success, (-1) on failure.
 */
int open_destination_file(const char *destination_file)
{
	int destination_fd = open(destination_file, O_WRONLY | O_CREAT |
O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);

	if (destination_fd == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", destination_file);

	return (destination_fd);
}

/**
 * copy_file - Copies the content from source_fd to destination_fd.
 * @source_fd: The file descriptor of the source file.
 * @destination_fd: The file descriptor of the destination file.
 *
 * Return: (0) on success, (-1) on failure.
 */
int copy_file(int source_fd, int destination_fd)
{
	ssize_t read_status, write_status;
	char buffer[BUF_SIZE];

	do {
		read_status = read(source_fd, buffer, BUF_SIZE);
		if (read_status == -1)
		{
			dprintf(STDERR_FILENO,
			"Error: Can't read from file descriptor %d\n",
			source_fd);
			return (-1);
		}

		write_status = write(destination_fd, buffer, read_status);
		if (write_status == -1)
		{
			dprintf(STDERR_FILENO,
			"Error: Can't write to file descriptor %d\n",
			destination_fd);
			return (-1);
		}
	} while (read_status > 0);

	return (0);
}

