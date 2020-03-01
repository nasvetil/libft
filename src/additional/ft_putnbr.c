#include "libft.h"

void	ft_putnbr(int n)
{
	if (n < 0)
		ft_putchar('-');
	if (n > 9 || n < -9)
	{
		ft_putnbr((n / 10) >= 0 ? (n / 10) : (n / 10) * (-1));
		ft_putnbr((n % 10) >= 0 ? (n % 10) : (n % 10) * (-1));
	}
	else
		ft_putchar((n >= 0) ? n + '0' : -n + '0');
}
