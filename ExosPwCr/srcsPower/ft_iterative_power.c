#include "lib.h"

int	ft_iterative_power(int nb, int power)
{
	int i;
	int c;

	i = 1;
	c = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while ( i < power)
	{
		c *= nb;
		++i;
	}
	return (c);
}
