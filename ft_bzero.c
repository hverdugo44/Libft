#include "libft.h"

char	ft_bzero(char *str, size_t n)
{
	while (n > 0)
	{
		str[n - 1] = 0;
		n--;
	}
}
