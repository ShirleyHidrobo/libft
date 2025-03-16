/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shhidrob <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 23:20:13 by shhidrob          #+#    #+#             */
/*   Updated: 2024/12/21 23:55:25 by shhidrob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*little == '\0')
		return ((char *)big);
	while (i < len && big[i] != '\0')
	{
		j = 0;
		while ((i + j) < len && big[i + j] == little[j] && little[j] != '\0')
		{
			j++;
		}
		if (little[j] == '\0')
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	big[] = "cou lou, cantaba la rana";
	char	little[] = "lou";
	char	*ptr;
	//char	*ptr1;

	ptr = ft_strnstr(big, little, 8);
	ptr1 = strnstr(big, little, 8);
	printf("%s\n", ptr);
	//printf("%s", ptr1);
	return (0);
}*/
/* & is the address of the house where it's found little and
 * then from there we want to print the rest of houses if not
 * i would only print little. If there's not street - big 
 * then there's no place where to look the house
 * so then it returns null*/
