#include "libft.h"

int	ft_isascii(char c)

{
	if (c <= 127 && c > -1)
		return (1);
	return (0);
}
