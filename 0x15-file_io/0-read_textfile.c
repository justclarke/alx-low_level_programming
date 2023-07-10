#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output.
 * @filename: name of the file
 * @letters: number of letters to be read and printed
 * Return: number of letters it read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t b_read, w_size;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		close(fd);
		return (0);
	}
	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
	{
		free(buffer);
		return (0);
	}
	b_read = read(fd, buffer, letters);
	if (b_read == -1)
	{
		close(fd);
		return (0);
	}
	w_size = write(STDOUT_FILENO, buffer, b_read);
	if (w_size == -1)
		return (0);
	close(fd);
	free(buffer);
	return (b_read);
}
