/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usomer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 00:30:13 by usomer            #+#    #+#             */
/*   Updated: 2020/07/29 01:14:25 by usomer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb >= 13)
	{
		return (0);
	}
	if (nb == 1)
	{
		return (1);
	}
	else
	{
		return (nb * ft_iterative_factorial(nb - 1));
	}
}
