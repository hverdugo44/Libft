#include "libft.h"

char	*ft_memset(char *str, int c, size_t n)
{
	while (n > 0)
	{
		str[n - 1] = c;
		n--;
	}
	return (str);
}
