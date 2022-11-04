#include "main.h"

/**
 * read_textfile -reads a text file and prints it to the POSIX standard output
 *
 * @filename: function parameter, source file name
 *
 * @letters: function parameter, numbers of letters printed
 *
 * Return:the actual number of letters it could read and print
 *        if the file can not be opened or read, return 0
 *        if filename is NULL return 0
 *        if write fails or does not write expected amount of bytes, return 0
 *
 **/


ssize_t read_textfile(const char *filename, size_t letters)
{
	int open_file, read_file;
	char *buff = malloc(sizeof(char *) * letters);

	if (!buff)
	{
		return (0);
	}
	if (!filename)
	{
		return (0);
	}
	open_file = open(filename, O_RDONLY);
	if (open_file == -1)
	{
		return (0);
	}
	read_file = read(open_file, buff, letters);
	write(STDOUT_FILENO, buff, readed);
	free(buff);
	close(open_file);
	return (read_file);
}
