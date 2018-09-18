/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb3.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarinel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 17:52:35 by nmarinel          #+#    #+#             */
/*   Updated: 2018/09/10 20:16:36 by nmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(int c);

void	ft_print_comb2(void)
{
	int nb;
	int cd;

	nb = 00;
	while (nb <= 98)
	{
		cd = nb + 1;
		while (cd <= 99)
			if (nb < cd)
			{
				ft_putchar((nb / 10) + '0');
				ft_putchar((nb % 10) + '0');
				ft_putchar(' ');
				ft_putchar((cd / 10) + '0');
				ft_putchar((cd % 10) + '0');
				if (nb != 98)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				cd++;
			}
		nb++;
	}
}
