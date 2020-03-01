#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
		ft_putchar_fd('-', fd);
	if (n > 9 || n < -9)
	{
		ft_putnbr_fd((n / 10) >= 0 ? (n / 10) : (n / 10) * (-1), fd);
		ft_putnbr_fd((n % 10) >= 0 ? (n % 10) : (n % 10) * (-1), fd);
	}
	else
		ft_putchar_fd((n >= 0) ? n + '0' : -n + '0', fd);
}
