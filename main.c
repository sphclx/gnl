#include <fcntl.h>
#include <unistd.h>
#include "get_next_line.h"
#include <string.h>

int main(void)
{
	char *line;
	int fd;
	int ret;
	int count_lines;
	char *filename;
	int errors;

	filename = "text.txt";
	fd = open(filename, O_RDONLY);
	if (fd > 2)
	{
		count_lines = 0;
		errors = 0;
		line = NULL;
		while ((ret = get_next_line(fd, &line)) > 0)
		{
			if (count_lines == 0 && strcmp(line, "1234567") != 0)
				errors++;
			count_lines++;
			free(line);
		}
		close(fd);
	}
	return (0);
}
