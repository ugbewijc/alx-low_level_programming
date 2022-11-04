#include "main.h"

/**
 * main - Program Entry point
 *
 * @argc: function parameter, argument count
 *
 * @argv: function parameter, argument vector
 *
 * Return: 0 on success
 *
 **/

int main(int argc, char **argv)
{
	int o_file, t_file, r_file;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	o_file = open(src, O_RDONLY);

	if (!src || o_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}
	t_file = open(dest, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((r_file = read(o_file, buff, 1024)) > 0)
	{
		if (write(t_file, buff, r_file) != r_file || t_file == -1)
		{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
		exit(99);
		}
	}
	if (r_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}
	if (close(o_file) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", o_file);
		exit(100);
	}
	if (close(t_file) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", t_file);
		exit(100);
	}
	exit(0);
}
