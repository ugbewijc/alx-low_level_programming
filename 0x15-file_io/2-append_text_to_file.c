#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 *
 *
 * @filename: function parameter, name of file.
 *
 * @text_content: function parameter,NULL terminated string to add at the
 * end of the file
 *
 *
 * Return: 1 on success and -1 on failure
 *        -1 if filename is NULL
 *        1 if the file exist
 *        -1 if the file does not exist or if you do not have the required
 *        permissions to write the file
 *
 *
 * Do not create the file if it does not exist
 * If text_content is NULL, do not add anything to the file.
 *
 **/

int append_text_to_file(const char *filename, char *text_content)
{
	int read_file, nletters, write_file;

	if (!filename)
	{
		return (-1);
	}
	read_file = open(filename, O_WRONLY | O_APPEND);
	if (read_file == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
		{
		}
		write_file = write(read_file, text_content, nletters);
		if (write_file == -1)
		{
			return (-1);
		}
	}
	close(read_file);
	return (1);
}
