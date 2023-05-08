#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <stdarg.h>
#define BUFFER_SIZE 1024

/**
 * error_exit - prints an error message and exits the program
 * with the given code
 * @code: the exit code to use
 * @format: the error message format string
 * Return: None
 */
void error_exit(int code, const char *format, ...)
{
	va_list args;

	va_start(args, format);
	dprintf(STDERR_FILENO, format, args);
	dprintf(STDERR_FILENO, "\n");
	va_end(args);

	exit(code);
}

/**
 * main - entry point of the program
 * @argc: the number of arguments
 * @argv: the array of arguments
 * Return: 0 on success, 97-100 on failure
 */
int main(int argc, char **argv)
{
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to");

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_exit(98, "Error: Can't read from file %s", argv[1]);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (fd_to == -1)
		error_exit(99, "Error: Can't write to %s", argv[2]);

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
		error_exit(99, "Error: Can't write to %s", argv[2]);
	}

	if (bytes_read == -1)
		error_exit(98, "Error: Can't read from file %s", argv[1]);

	if (close(fd_from) == -1)
		error_exit(100, "Error: Can't close fd %d", fd_from);

	if (close(fd_to) == -1)
		error_exit(100, "Error: Can't close fd %d", fd_to);

	return (0);
}
