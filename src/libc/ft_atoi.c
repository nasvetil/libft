#include "libft.h"

int	ft_atoi(const char *str)
{
	long int	nmb;
	int			sign;

	nmb = 0;
	sign = 1;
	while ((*str == '\t' || *str == '\n' || *str == '\v' ||
			*str == '\f' || *str == '\r' || *str == ' '))
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		if ((sign * (nmb * 10 + (*str - '0'))) / 10 != sign * nmb)
			return ((sign == 1) ? -1 : 0);
		nmb = nmb * 10 + (*str - '0');
		str++;
	}
	return (sign * nmb);
}
