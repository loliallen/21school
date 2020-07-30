#include <stdio.h>
#include <stdlib.h>

int		main(int argc, char *argv)
{
	(void) argc;
	int		num;

	num = atoi(argv[1]);
	printf("%d\n", ft_recursive_factorial(num));
}
