
#include <fcntl.h>
#include <unistd.h>
#include <libgen.h>
#include <stdlib.h>

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

int	ft_strcmp(char *st1, char *st2)
{
	int	i;

	i = 0;
	while (st1[i] && st2[i])
	{
		if (st1[i] != st2[i])
			return (st1[i] - st2[i]);
		i++;
	}
	return (st1[i] - st2[i]);
}

void	ft_tail(char *fn, int size)
{
	char	*buf;
	int		count;
	int		fd;

	fd = open(fn, O_RDONLY);
	buf = malloc((size + 1) * sizeof(char));
	read(fd, buf, size);
	count = 0;
	while (size-- > 1)
	{
		if (buf[size] == '\n')
			count++;
		if (count == 11)
		{
			size++;
			break;
		}
	}
	while (buf[size] != '\0')
	{
		write(1, &buf[size], 1);
		size++;
	}
}

int main(int argc, char **argv)
{
	int	i;
	int	size;

	i = 0;
	if (argc < 2)
		return 0;
	else
	{
		if (ft_strcmp(argv[1], "-c") == 0)
		{
			return 0; //do_the_c_thing();
		}
		else
		{
			while (++i < argc)
			{
				size = file_size(argv[i]);
				ft_tail(argv[i], size);
			}
		}
	}
	return 0;
}
