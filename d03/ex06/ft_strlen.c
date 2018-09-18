/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarinel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 11:44:31 by nmarinel          #+#    #+#             */
/*   Updated: 2018/09/12 17:42:03 by nmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int wc;

	wc = 0;
	while (str[wc] != '\0')
	{
		wc++;
	}
	return (wc);
}