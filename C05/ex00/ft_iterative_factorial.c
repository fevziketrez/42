#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	temp;

	temp = 1;
	if (nb < 0)
		return (0);
	while (0 < nb)
	{
		temp *= nb;
		nb -= 1;
	}
	return (temp);
}
