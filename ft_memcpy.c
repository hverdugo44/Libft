#include "libft.h"

void	*ft_memcpy(void *dest, void *src, size_t n)
{
	size_t	i;
	char	*s1;
	char	*d1;

	s1 = (char *)src;
	d1 = (char *)dest;
	i = 0;
	while (n > i)
	{
		d1[i] = s1[i];
		i++;
	}
	return (dest);
}
