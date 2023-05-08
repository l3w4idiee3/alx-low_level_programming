#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * append_text_to_file - appends text to a file
 * @filename: the filename to open and append to
 * @text_content: text to append onto new file
 *
 * Return: 1 on success, -1 on failure (file can not be created, or written,
 * or write fails, etc).
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, size;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);
	for (size = 0; text_content && text_content[size]; size++)
		;
	if (write(fd, text_content, size) != size)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
