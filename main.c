#include "libft.h"

int	main(int argc, char **argv)
{
	int	i = 0;
	char	**mat;
	(void)argc;

	mat = ft_split(argv[1], ft_atoi(argv[2]));
	while (mat[i] != NULL)
	{
	 	printf("%s\n", mat[i]);
		free(mat[i]);
		i++;
	}
	free(mat);
	return (0);
}
