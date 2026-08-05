#ifndef MAIN_H
# define MAIN_H
# define ERR_MISSING_C_ARG -1

typedef struct s_words
{
	int		bytes_read;
	int		file_size;
	char	*file_name;
}	t_words;

int file_size(char *str);
void ft_tail(t_words file);
void c_tail(t_words file);
void tail_main(inr argc, cahr **argv, int i, bool has_c);
void print_error(int err);
void print_file(int fd, char *buf, int size);
int	ft_strcmp(char *st1, char *st2);
char *find_num(char *str);
int	ft_atoi(char *str);

# include <unistd.h> // read, write, close
# include <stdlib.h> // malloc, free
# include <fcntl.h> // open
# include <libgen.h> // basename
# include <string.h> // strerror
# include <errno.h> // errno

#endif
