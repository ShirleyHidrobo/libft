/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shhidrob <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 20:04:06 by shhidrob          #+#    #+#             */
/*   Updated: 2024/12/23 21:38:25 by shhidrob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while ((str[i] == 32) || (str[i] >= 9 && str[i] <= 13))
		i++;
	if ((str[i]) == '-' || (str[i] == '+'))
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}
/*
int	main(void)
{
	const	char str[] = "-+56";
	const   char str1[] = "-56";
	const   char str2[] = "---+ \n ++56";

	printf("%d\n", ft_atoi(str));
	printf("%d\n", atoi(str));
	printf("%d\n", ft_atoi(str1));
        printf("%d\n", atoi(str1));
	printf("%d\n", ft_atoi(str2));
        printf("%d\n", atoi(str2));
	return (0);
}*/
