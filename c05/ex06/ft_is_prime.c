/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usomer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 02:36:52 by usomer            #+#    #+#             */
/*   Updated: 2020/07/29 03:01:34 by usomer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int		i;

	i = 2;
	while (nb / 4 + 1 >= i && i <= (2147483647 / 2))
	{
		if (i * i <= nb && (i + 1) * (i + 1) > nb)
		{
			return (i);
		}
		i++;
	}
	return (i);
}

int		ft_is_prime(int nb)
{
	int		i;
	int		sqrt;

	i = 2;
	sqrt = ft_sqrt(nb);
	while (sqrt >= i)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
