#include "main.h"
/**
 * create_file - Creates a file and writes text content
 * @filename: pointer to the name of file to create
 * Return: 1 on success, -1 if function fails
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor, write_result, length = 0;

	if (filename == NULL)
		return -1;

	if (text_content != NULL)
	(
		 while (text_content[length])
		 length++;
	}

	file_descriptor = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (file_descriptor == -1)
	return -1;

	write_result = write(file_descriptor, text_content, length);

	if (write_result == -1)
	{
	
	close(file_descriptor);

	return 1;
}
		

