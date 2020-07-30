#include <stdio.h>
#include <stdlib.h>

int		ft_iterative_factorial(int nb);

int		main(int argc, char **argv)
{
	int		num;

	(void) argc;
	num = atoi(argv[1]);
	printf("%d\n", num);
	printf("%d\n", ft_iterative_factorial(num));
}
