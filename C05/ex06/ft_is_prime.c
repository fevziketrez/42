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
