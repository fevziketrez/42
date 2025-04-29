int	ft_is_prime(int ab)
{
	int	i;

	i = 2;
	if (ab <= 1)
		return (0);
	if (ab == 2)
		return (1);
	while (i < ab)
	{
		if (ab % i == 0)
			return (0);
		i += 1;
	}
	return (1);
}

int	ft_find_next_prime(int ab)
{
	if (ab <= 2)
		return (2);
	if (ab % 2 == 0)
		ab += 1;
	while (1)
	{
		if (ft_is_prime(ab))
			return (ab);
		ab += 2;
	}
}
