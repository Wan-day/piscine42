#ifndef MAIN_H
# define MAIN_H
# define ERR_MISSING_C_ARG -1

# include <unistd.h> // read, write, close
# include <stdlib.h> // malloc, free
# include <fcntl.h> // open
# include <libgen.h> // basename
# include <string.h> // strerror
# include <errno.h> // errno
# include <sys/types.h> // ssize_t
						//
typedef struct s_words
{
	int		bytes_read;
	ssize_t	file_size;
	char	*file_name;
}	t_words;

ssize_t file_size(char *str);
void ft_tail(t_words file);
void c_tail(t_words file);
void tail_main(int argc, char **argv, int i, bool has_c);
void print_error(int err);
void print_file(char *buf, ssize_t size);
int	ft_strcmp(char *st1, char *st2);
char *find_num(char *str);
int	ft_atoi(char *str);

#endif
