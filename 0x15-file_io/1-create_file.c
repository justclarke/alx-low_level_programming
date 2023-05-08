#include "main.h"
/**
 * create_file - creates a file and writes text
 * @text_content: NULL terminated sting to write to the file
 * @filename: name of the file to create
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len, bytes_written;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		len = strlen(text_content);
		bytes_written = write(fd, text_content, len);
		if (bytes_written != len)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
