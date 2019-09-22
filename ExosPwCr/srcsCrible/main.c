#include "lib.h"

int	main(int argc, char **argv)
{
	if (argc == 3)
		printf("%d\n", ft_find_next_prime(atoi(argv[1]), atoi(argv[2])));
	printf("%s\n", "Utilisez 2 arguments: le nombre et la puissance à laquelle il doit être mis.");
	return (0);
}
