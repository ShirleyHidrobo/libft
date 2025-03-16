/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shhidrob <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 16:21:50 by shhidrob          #+#    #+#             */
/*   Updated: 2024/12/21 23:48:11 by shhidrob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

static int	ft_number_len(unsigned int unsigned_n)
{
	if (unsigned_n < 10)
		return (1);
	return (ft_number_len(unsigned_n / 10) + 1);
}

void	ft_fillnum(unsigned int unsigned_n, int is_negative, char *number_str)
{
	int	i;

	if (is_negative)
		number_str[0] = '-';
	i = is_negative + ft_number_len(unsigned_n) - 1;
	while (i >= is_negative)
	{
		number_str[i] = unsigned_n % 10 + '0';
		unsigned_n = unsigned_n / 10;
		i--;
	}
}

char	*ft_itoa(int n)
{
	int				is_negative;
	unsigned int	unsigned_n;
	int				number_len;
	char			*number_str;

	if (n < 0)
	{
		is_negative = 1;
		unsigned_n = -n;
	}
	else
	{
		is_negative = 0;
		unsigned_n = n;
	}
	number_len = ft_number_len(unsigned_n);
	number_str = ft_calloc(is_negative + number_len + 1, sizeof(char));
	if (!number_str)
		return (NULL);
	ft_fillnum(unsigned_n, is_negative, number_str);
	return (number_str);
}
