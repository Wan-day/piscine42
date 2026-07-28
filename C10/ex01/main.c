#include <fcntl.h>
#include <unistd.h>
#include <libgen.h>
#include "main.h"

void print_file(int fd, char *str)
{
	char	buf[1];
	int		byteCount;

	while ((byteCount = read(fd, buf, 1)) > 0)
	{
		if (byteCount > 0)
			write(1, &buf, 1);
	}
	if (byteCount < 0)
	{
			write(2, "ft_cat: ", 8);
			while (str)
				write(2, str++, 1);
			write(2, "Cannot read file\n", 17);
	}
	(void)str;
}

void	ft_cat(int argc, char **argv)
{
	int	i;
	int	fd;

	i = 0;
	while (++i < argc)
	{
		fd = open(basename(argv[i]), O_RDONLY);
		if (fd == -1)
		{
			write(2, "ft_cat: ", 0);
			while (*(argv[i]))
					write(2, (argv[i])++, 1);
			write(2, ": No such file or directory\n", 28);
		}
		else
			print_file(fd, argv[i]);
		close(fd);
	}
}

int main(int argc, char **argv)
{
	if (argc == 1)
	{
		print_file(0, 0);
	}
	else
		ft_cat(argc, argv);
	return 0;
}
