#ifndef FT_LIB
# define FT_LIB

# include <stdlib.h>
# include <string.h>
# include <unistd.h>

ft_memset
ft_bzero
ft_memcpy
ft_memccpy
ft_memmove
ft_memchr
ft_memcmp
ft_strlen
ft_strdup
ft_strcpy
ft_strncpy
ft_strcat
ft_strncat
ft_strlcat
ft_strchr
ft_strrchr
ft_strstr
ft_strnstr
ft_strcmp
ft_strncmp
ft_atoi

size_t	ft_strlen(const char *str);

int		ft_toupper(int c);

int		ft_tolower(int c);

int		ft_isascii(int c);

int		ft_isprint(int c);

int		ft_isalnum(int c);

int		ft_isdigit(int c);

int 	ft_isalpha(int c);

#endif