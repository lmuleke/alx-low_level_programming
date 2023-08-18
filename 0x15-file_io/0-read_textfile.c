#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Read text file print to STDOUT
 * @filename: The name of the text file to read
 * @letters: The number of letters
 * Return: The actual number of bytes written,
 * or -1 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
