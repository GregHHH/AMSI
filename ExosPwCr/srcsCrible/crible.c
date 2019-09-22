#include "lib.h"
#include <unistd.h>

int	ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i <= nb / i)
	{
		if (nb / i * i == nb)
			return (0);
		++i;
	}
	return (1);
}

int	ft_find_next_prime(int nb, int m)
{
	while(nb < m)
	{
		if (nb <= 2)
		{
			write(1, "2\n", 2);
			nb = 2;
			ft_find_next_prime(nb + 1, m);
		}
		if (ft_is_prime(nb))
		{
			printf("%d\n", nb);	
			ft_find_next_prime(nb + 1, m);
		}
		ft_find_next_prime(nb + 1, m);
	}
	return (0);
}
