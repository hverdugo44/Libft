#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

// IS

int		ft_strlen(char const *str);
char	*ft_strchr(char const *s, int c);

int		ft_isalnum(char c);
int		ft_isalpha(char c);
int		ft_isascii(char c);
int		ft_isdigit(char c);
int		ft_isprint(char c);

char	*ft_memset(char *str, int c, size_t n);
char	ft_bzero(char *str, size_t n);

char	*ft_strchr(char const *s, int c);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
#endif
