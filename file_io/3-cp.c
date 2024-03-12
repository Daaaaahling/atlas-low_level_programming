#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <fcntl.h>

char *allocate_buffer(char *filename);
void close_file(int file_descriptor);
/**
 * create_buffer - allocates 1024 bytes
 * @file: name of file buffer is storing chars for
 * Return: pointer to the newly-allocated buffer
 */
char *allocate_buffer(char *filename)
{
	char *buffer = malloc(1024 * sizeof(char));

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", filename);
		exit(99);
	}

	return (buffer);
}
