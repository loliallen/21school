/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usomer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 02:48:41 by usomer            #+#    #+#             */
/*   Updated: 2020/07/29 03:04:56 by usomer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int		i;

	i = 1;
	while (nb / 4 + 1 >= i && i < (2147483646 / 2))
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

	i = 2;
	while (ft_sqrt(nb) >= i)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	int		n_p;
	int		i;

	i = nb;
	n_p = 0;
	while (!n_p)
	{
		if (ft_is_prime(i) == 1)
		{
			n_p = i;
		}
		i++;
	}
	return (n_p);
}
