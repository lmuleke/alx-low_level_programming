#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - for a buffer allocates 1024 bytes.
 * @file: name of the file the buffer is storing chars for
 * Return: pointer to the newly allocated buffer
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: can't write to %s\n",
file);
		exit(99);
	}
	return (buffer);
}

/**
 * close_file - closes the file disruptors
 * @fd: file discriptor that should be closed
 */
void close_file(int fd)
{
	int c;
	c = close(fd);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies a files contents to another file
 * @argc: number of arguments supplied to the program
 * @argv: array of pointers to the arguments
 * Return: 0 on success.
 *
 * Description: Exit code 97 if argument count is incorrect
 * if file_from does not exist or cant be read exit code 98.
 * if file_to cannot be created or written exi t code 99.
 * if file_to or file_from connot be closed exit code 100.
 */
int main(int argc, char *argv[])
{
	int from, to, r;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: can't read from file %s\n", argv[1]);
			free(buffer);
			exit(99);
		}

		r = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	   } while (r > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
