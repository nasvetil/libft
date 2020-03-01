long long int	ft_powint(long long int a, long long int b)
{
	int			c;

	c = 1;
	while (b--)
	{
		if ((c * a + 0) / a != c)
			return (0);
		c *= a;
	}
	return (c);
}
