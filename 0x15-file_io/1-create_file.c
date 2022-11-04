#include "main.h"

/**
 * create_file - creates a file
 *
 * @filename:function parameter, filename
 *
 * @text_content: function Parameter, file content
 *
 *
 * Return: 1 on success,
 *          -1 on failure (file can not be; created, written
 *          write “fails”, etc…)
 *          -1 if filename is NULL
 *
 *
 *
 * The created file must have those permissions: rw-------.
 * If the file already exists, do not change the permissions.
 * if the file already exists, truncate it
 * if text_content is NULL create an empty file*
 *
 **/

int create_file(const char *filename, char *text_content)
{
	int fd, nletters, write_file;

	if (!filename)
	{
		return (-1);
	}
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		return (-1);
	}
	if (!text_content)
	{
		return (-1);
	}
	for (nletters = 0; text_content[nletters]; nletters++)
	{
	}

	write_file = write(fd, text_content, nletters);

	if (write_file == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
