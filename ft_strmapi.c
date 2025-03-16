/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shhidrob <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 15:44:58 by shhidrob          #+#    #+#             */
/*   Updated: 2024/12/21 23:54:16 by shhidrob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*dest;

	i = 0;
	dest = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (dest == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		dest[i] = f(i, s[i]);
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
static char	ft_toupper2(unsigned int i, char c)
{
	(void)i;
	if (c >= 'a' && c <= 'z')
		return (c + ('A' - 'a'));
	return (c);
}

static char	ft_tolower2(unsigned int i, char c)
{
	(void)i;
	if (c >= 'A' && c <= 'Z')
		return (c + ('a' - 'A'));
	return (c);
}

#include <stdio.h>

int	main(void)
{
	char	*s = "Hello";
	char	*s_copy;
	char	*s_copy2;

	s_copy = ft_strmapi(s, ft_toupper2);
	s_copy2 = ft_strmapi(s, ft_tolower2);
	printf("original, %s\n", s);
	printf("1copy, %s\n", s_copy);
	printf("2copy, %s\n", s_copy2);
	free(s_copy);
	free(s_copy2);
	return (0); //	we don't need to change it *s =
}*/
