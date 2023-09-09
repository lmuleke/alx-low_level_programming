#include "main.h"

/**
 * append_text_to_file.
 * @filename: pointer to file
 * @text: string to add to end of file
 *
 * Return: in failure return - - 1, otherwise return - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if(filename == NULL)
		return (-1);

	if(text_content != NULL)
	{
		for(len = 0;text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	W = write(o, text_content, len);

	if(o == -1 || w == -1)
		return (-1);

	close(o);
	
	return (1);
}
