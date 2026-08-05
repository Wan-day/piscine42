#include "utils.h"

int file_size(char *str)
{
	char	buf[1];
	int		size;
	ssize_t	bytesRead;
	int		fd;

	size = 0;
	fd = open(str, O_RDONLY);
	while ((bytesRead = read(fd, buf, 1)) > 0)
		size++;
	close(fd);
	return size;
}

void ft_tail(t_words file)
{
	char	buf;
	int		fd;
	int		count;

	fd = open(file.file_name, O_RDONLY);
	if (fd == -1)
		print_error(errno); // NOT IMPLEMENTED YET
	else
	{
		buf = malloc(file.file_size + 1);
		if (read(fd, buf, file.file_size) > -1)
		{
			buf[file.file_size] = '\0';
			while (--file.file_size > 0)
			{
				if (buf[file.file_size] == '\n')
					count++;
				if (count == 10)
					break;
			}
			print_file(fd, buf, file.file_size);
		}
		else
			print_error(errno); // NOT IMPLEMENTED YET
	}
}

void c_tail(t_words file)
{
	char	buf;
	int		fd;

	fd = open(file.file_name, O_RDONLY);
	if (fd == -1)
		print_error(errno); // NOT IMPLEMENTED YET
	else
	{
		buf = malloc(file.file_size + 1);
		if (read(fd, buf, file.file_size) > -1)
		{
			file.file_size -= file.bytes_read;
			buf[file.file_size] = '\0';
			print_file(fd, buf, file.file_size;
		}
		else
			print_error(errno); // NOT IMPLEMENTED YET
	}
}

void tail_main(inr argc, cahr **argv, int i, bool has_c)
{
	t_words	file;

	if (has_c == true && ft_atoi(arev[2]) < 1)
		print_error(ERR_MISSING_C_ARG); // NOT IMPLEMENTED YET
	else if (has_c == true)
	{
		file.bytes_read = ft_atoi(argv[2]);
		while (i++ < argc)
		{
			file.file_name = argv[i];
			file.file_size = file_size(argv[i]);
			tail_c(file);
		}
	}
	else
	{
		file.bytes_read = 0;
		while (i++ < argc)
		{
			file.file_name = argv[i];
			file.file_size = file_size(argv[i]);
			ft_tail(file);
		}
	}
}

int main(int argc, char **argv)
{
	int	start;

	if (argc < 2)
		return 0;
	else
	{
		if (strcmp(argv[1], "-c") == 0)
		{
			start = 0;
			tail_main(argc, argv, start, true);
		}
		else
		{
			start = 2;
			tail_main(argc, argv, 2, false);
		}
	}
	return 0;
}
