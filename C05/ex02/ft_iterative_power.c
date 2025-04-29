int	ft_iterative_power(int ab, int power)
{
	int	temp;

	temp = ab;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		temp = temp * ab;
		power -= 1;
	}
	return (temp);
}
