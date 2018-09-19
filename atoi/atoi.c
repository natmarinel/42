/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarinel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 11:26:54 by nmarinel          #+#    #+#             */
/*   Updated: 2018/09/12 17:36:33 by nmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int    ft_atoi(char *str)
{
    int i;
    int result;
    int neg;
    
    neg = 0;
    i = 0;
    while((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
    {
        printf("index: [%d] | ", i);
        printf("ascii value: '%d' \n", str[i]);
        i++;
    }
    while (str[i] == 45 || str[i] == 43)
    {
        printf("index: [%d] | ", i);
        printf("ascii value '%d' \n", str[i]);
        if (str[i] == 45)
            neg = 1;
        if ( str[i] == 45 && str[i + 1] == 43)
            return (0);
        if ( str[i] == 43 && str[i + 1] == 45)
            return (0);
        printf("neg : %d\n", neg);
        i++;
    }
    while ( str[i] >= 48 && str[i] <= 57)
    {
        
        printf("index: [%d] | ", i);
        printf("ascii value: '%d' | ", str[i]);
        result = (result * 10) + (str[i] - 48);
        i++;
        printf("result : %d\n", result);
    }
    return (neg) ? -result : result;
}

int main()
{
    printf("%d", ft_atoi("+-123"));
    return (0);
}

