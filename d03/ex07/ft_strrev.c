/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarinel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 15:49:11 by nmarinel          #+#    #+#             */
/*   Updated: 2018/09/17 19:01:59 by nmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		start;
	int		end;
	char	tmp;

	start = 0;
	end = 0;
	while (str[end] != '\0')
	{
		end++;
	}
	end = end - 1;
	while (start < end)
	{
		tmp = str[end];
		str[end] = str[start];
		str[start] = tmp;
		start++;
		end--;
	}
	return (str);
}
