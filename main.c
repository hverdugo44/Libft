#include "libft.h"

int	main(int argc, char **argv)
{
	int	i = 1;
	char	*str;

	while (argc > i)
	{
		str = ft_itoa(ft_atoi(argv[i]));
		printf("%s\n", str);
		free(str);
		i++;
	}
	return (0);
}
