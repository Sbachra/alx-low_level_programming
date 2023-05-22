#include "main.h"
/**
* create_file - creats a file
* @filename: filename
* @text_content: the content writed on the file
* Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	int letters = write(fd, text_content, strlen(text_content));

	if (filename == NULL)
		return (-1);

	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		if (letters == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
