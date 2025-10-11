#include "libft.h"

static int	length(int n)
{
	int	i;

	i = 0;
	if (n < 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static void	excepcion(int n, int fd)
{
	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else
		write(fd, "0", 1);
}

void	print(char *str, int fd)
{
	write(fd, str, ft_strlen(str));
}

void	ft_putnbr_fd(int n, int fd)
{
	char	str[12];
	int		len;
	int		i;

	i = -1;
	if (n == -2147483648 || n == 0)
	{
		excepcion(n, fd);
		return ;
	}
	len = length(n);
	while (++i < 13)
		str[i] = 0;
	if (n < 0)
	{
		str[0] = '-';
		n = n * -1;
	}
	while (n != 0)
	{
		str[len - 1] = n % 10 + 48;
		n = n / 10;
		len--;
	}
	print(str, fd);
}
