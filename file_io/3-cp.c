#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <fcntl.h>
#include <unistd.h>

char *allocate_buffer(char *filename);
void close_file(int file_descriptor);
/**
 *allocate_buffer - allocates 1024 bytes
 * @filename: name of file buffer is storing chars for
 * Return: pointer to the newly-allocated buffer
 */
char *allocate_buffer(char *filename)
{
	char *buffer = malloc(1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}

	return buffer;
}

/**
 * close_file - function used to close files
 * @fd: file descriptor to be closed
 */
void close_file(int fd)
 {
	 int result = close(fd);
	 
	 if (result == -1)
	 {
		 dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		 exit(100);
	 }
 }

/**
 * main - copies contents of a file to another file
 * @argc: number of arguments supplied
 * @argv: array of pointers to arguments
 * Return: 0
 */ 
int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *buffer;
	
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	
	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	
	if (from == -1)
	{
		dprintf(STDERR_FILENO,dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		free(buffer);
		exit(99);
		}
		
		to = open(argv[2], O_WRONLY | O_APPEND);
		if (to == -1)
		{
	       
		close_file(from);
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		free(buffer);
		exit(99);
		}

		w = write(to, buffer, r);

		if (w == -1)
		{

		close_file(from);
		close_file(to);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		free(buffer);
		exit(99);
		}
} while (r > 0);

free(buffer);
close_file(from);
close_file(to);

 return (0);
 }
