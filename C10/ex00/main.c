#include <fcntl.h>
#include <unistd.h>
#include "main.h"

int	size_of(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void ft_print(char *str, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		write(1, &str[i], 1);
		i++;
	}
}

void error_check(int param)
{
	if (param == 1)
		ft_print("File name missing\n", size_of("File name missing\n"));
	else if (param > 2)
		ft_print("Too many arguments\n", size_of("Too many arguments\n"));
	else if(param == -1)
		ft_print("Cannot read file\n", size_of("Cannot read file\n"));
}

void write_file(int fd)
{
	char	buf[1024];
	ssize_t bytesRead;

	while ((bytesRead = read(fd, buf, sizeof(buf))) > 0)
	{
		if (bytesRead > 0)
			ft_print(buf, bytesRead);
	}
	if (bytesRead == -1)
		error_check(bytesRead);
}

int	main(int argc, char **argv)
{
	int	fd;

	if (argc != 2)
	{
		error_check(argc);
		return 0;
	}
	else
	{
		fd = open(argv[1], O_RDONLY);
		write_file(fd);
		close(fd);
		return 0;
	}
}
