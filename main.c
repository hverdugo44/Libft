#include "libft.h"

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		ft_memcpy(argv[1], &argv[1][6], 5);
		ft_memmove(argv[2], &argv[2][5], 8);
		ft_memmove(&argv[3][5], argv[3], 8);
		printf("memcpy ->	%s\nmemmove1 ->	%s\nmemmove2  ->	%s\n", argv[1], argv[2], argv[3]);
	}
	return (0);
}
