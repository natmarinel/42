/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarinel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 01:47:18 by nmarinel          #+#    #+#             */
/*   Updated: 2018/09/19 19:59:13 by nmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int i;

	i = 2;
	while ((nb % i) != 0)
	{
		if (i > nb)
			return (0);
		i++;
	}
	if (nb == i)
		return (1);
	return (0);
}
