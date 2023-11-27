#include <fcntl.h>
#include <unistd.h>
#include "main.h"
/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: The name of the file.
 * @text_content: The content to add at the end of the file.
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
size_t length = 0;
ssize_t bytes_written;
int file_descriptor;
if (filename == NULL)
return (-1);
file_descriptor = open(filename, O_WRONLY | O_APPEND);
if (file_descriptor == -1)
return (-1);
if (text_content != NULL)
{
while (text_content[length] != '\0')
length++;
bytes_written = write(file_descriptor, text_content, length);
if (bytes_written == -1)
{
close(file_descriptor);
return (-1);
}
}
close(file_descriptor);
return (1);
}
