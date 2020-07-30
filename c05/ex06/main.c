#include "ft_is_prime.c"
#include <stdio.h>

int main()
{
	printf("2147483647 %d\n", ft_is_prime(2147483647));
	printf("2147483646 %d\n", ft_is_prime(2147483646));
	printf("2147483645 %d\n", ft_is_prime(2147483645));
}
