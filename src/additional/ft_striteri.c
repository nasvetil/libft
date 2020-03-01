void				ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (s && f)
	{
		i = 0;
		while (*s != '\0')
		{
			f(i, s);
			i++;
			s++;
		}
	}
}
