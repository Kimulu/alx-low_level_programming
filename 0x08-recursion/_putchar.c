#include <unistd.h>

/**
 * _putchar - Write a character to stdout
 * @c: The character to be written
 *
 * Return: On success, 1 is returned. On error, -1 is returned,
 * and errno is set appropriately.
 */
int _putchar(char c) {
    return write(1, &c, 1);
}

