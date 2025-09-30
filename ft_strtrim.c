#include "libft.h"

static char	*inicio(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (!ft_strchr(set, s1[i]))
			return (&s1[i]);
		i++;
	}
	return (NULL);
}

static char	*fin(char const *s1, char const *set)
{
	int	i;

	i = ft_strlen(s1) - 1;
	while (s1[i])
	{
		if (!ft_strchr(set, s1[i]))
			return (&s1[i + 1]);
		i--;
	}
	return (NULL);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*start;
	char	*end;
	char	*str;
	int		i;

	i = 0;
	start = inicio(s1, set);
	if (!start)
	{
		str = (char *)malloc(sizeof(char) * 1);
		if (!str)
			return (NULL);
		str[0] = 0;
		return (str);
	}
	end = fin(s1, set);
	while (&str[i] != end)
		i++;
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	str[i] = 0;
	while (--i != -1)
		str[i] = start[i];
	return (str);
}
