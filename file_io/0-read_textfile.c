#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters to read and print
 *
 * Return: actual number of letters read and printed, 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t read_count, write_count;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * num_letters + 1);
	if (buffer == NULL)
		return (0);

	read_count = read(fd, buffer, num_letters);
	if (read_count == -1)
	{
		free(buffer);
		return (0);
	}

	buffer[num_letters] = '\0';
	clode(fd);

	write_count = write(STDOUT_FILENO, buffer, read_count);
	free(buffer);

	if (write_count == -1)
		return (0);

	return (read_count);
}
