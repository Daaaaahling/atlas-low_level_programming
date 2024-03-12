#include "main.h"
/**
 * append_text_to_file - appends text at end of file
 * @filename: pointer to name of file
 * @text_content: content to add to end of file
 * Return: 1 on success, on failure -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, write_result, length = 0;

	if (file_name == NULL)
		return -1;

	if (text_content != NULL)
	{
		while (text_content[length])
			length++;
	}

	file_descriptor = open(file_name, O_WRONLY | O_APPEND);
	write_result = write(file_descriptor, text_content, length);

	if (file_descriptor == -1 || write_result == -1)
		return -1;

	close(file_descriptor);

	return 1;
}
