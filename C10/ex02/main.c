#include "utils.h"

ssize_t file_size(char *str)
{
	char	buf[1];
	ssize_t		size;
	ssize_t	bytesRead;
	int		fd;

	size = 0;
	fd = open(str, O_RDONLY);
	while ((bytesRead = read(fd, buf, 1)) > 0)
		size += bytesRead;
	close(fd);
	return size;
}

void print_tail(ssize_t size, int fd, char *buf)
{
	ssize_t bytes_read;
	int		count;

	count = 0;
	bytes_read = read(fd, buf, size);
	if (bytes_read > 0)
	{
		buf[bytes_read] = '\0';
		while (--bytes_read > 0)
		{
			if (buf[bytes_read - 1] == '\n')
				count++;
			if (count == 10)
				break;
		}
		print_file(buf, bytes_read);
	}
	else
		print_error(errno); // NOT IMPLEMENTED YET
}

void ft_tail(t_words file)
{
	char	*buf;
	int		fd;

	fd = open(file.file_name, O_RDONLY);
	if (fd == -1)
		print_error(errno); // NOT IMPLEMENTED YET
	else
	{
		buf = malloc((file.file_size + 1) * sizeof(char));
		print_tail(file.file_size, fd, buf);
		free(buf);
		close(fd);
	}
}

void c_tail(t_words file)
{
	char	*buf;
	int		fd;

	fd = open(file.file_name, O_RDONLY);
	if (fd == -1)
		print_error(errno); // NOT IMPLEMENTED YET
	else
	{
		buf = malloc((file.file_size + 1) * sizeof(char));
		if (read(fd, buf, file.file_size) > -1)
		{
			buf[file.file_size] = '\0';
			file.file_size = file.file_size - file.bytes_read;
			print_file(buf, file.file_size);
			free(buf);
			close (fd);
		}
		else
			print_error(errno); // NOT IMPLEMENTED YET
	}
}

void tail_main(int argc, char **argv, int i, bool has_c)
{
	t_words	file;

	if (has_c == true && ft_atoi(argv[2]) < 1)
		print_error(ERR_MISSING_C_ARG); // NOT IMPLEMENTED YET
	else if (has_c == true)
	{
		file.bytes_read = ft_atoi(argv[2]);
		while (++i < argc)
		{
			file.file_name = argv[i];
			file.file_size = file_size(argv[i]);
			c_tail(file);
		}
	}
	else
	{
		file.bytes_read = 0;
		while (++i < argc)
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
		if (argc > 2 && ft_strcmp(argv[1], "-c") == 0)
		{
			start = 2;
			tail_main(argc, argv, start, true);
		}
		else
		{
			start = 0;
			tail_main(argc, argv, start, false);
		}
	}
	return 0;
}
