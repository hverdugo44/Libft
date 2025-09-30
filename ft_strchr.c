#include "libft.h"

char	*ft_strchr(char const *s, int c)
{
	int	i;

	i = 0;
	if (s[i] == c)
		return (&s[i]);
	i++;
	while (s[i - 1])
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (NULL);
}
