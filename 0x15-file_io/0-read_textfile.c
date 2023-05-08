#include "main.h"
/**
 * read_textfile -  reads a text file
 * and prints it to the POSIX standard output.
 * @filename: the file to be read
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	int fd;
	ssize_t bytes_read, bytes_written;

	if (!filename)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (!buff)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buff);
		return (0);
	}

	while ((bytes_read = read(fd, buff, letters)) > 0)
	{
		bytes_written = write(STDOUT_FILENO, buff, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
		{
			free(buff);
			close(fd);
			return (0);
		}
	}
	free(buff);
	close(fd);
	return (bytes_written);
}