/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shhidrob <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 15:17:01 by shhidrob          #+#    #+#             */
/*   Updated: 2024/12/21 23:52:58 by shhidrob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/*
static void	ft_tolower2(unsigned int i, char *c)
{
	(void)i;
	if( *c >= 'A' && *c <= 'Z')
		*c = *c + ('a' - 'A');
}

static void	ft_toupper2(unsigned int i, char *c)
{
	(void)i;
	if (*c >= 'a'&& *c <= 'z')
	       *c = *c + ('A' - 'a');
}

#include <stdio.h>

int	main(void)
{
	char	s[] = "Hello";
	printf("before, %s\n", s);
	ft_striteri(s, ft_toupper2);
	printf("after, %s\n", s);
	ft_striteri(s, ft_tolower2);
	printf("again, %s\n", s);
	return (0);
}*/
