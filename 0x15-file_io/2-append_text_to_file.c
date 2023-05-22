#include "main.h"
/**
* append_text_to_file - appends text at the end of a file
* @filename: the file we append to
* @text_content: the content to append at the end the file
* Return: 1 succes otherwise -1
*/
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t n;
	int j, fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		for (j = 0; text_content[j]; j++)
			;
		n = write(fd, text_content, j);
		if (n == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
